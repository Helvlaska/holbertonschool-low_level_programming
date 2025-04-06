#include <fcntl.h> /*open() et les flags O_RDONLY, etc*/
#include <unistd.h> /*pour read(), write(), close(), STDOUT_FILENO*/
#include <stdio.h> /*pour dprintf()*/
#include <stdlib.h> /*pour exit()*/

/**
 * copy_loop - effectue la lecture et l’écriture entre deux fichiers
 * @open_from: descripteur du fichier source
 * @open_to: descripteur du fichier destination
 * @array_stock: tableau tampon pour stocker les données
 * @dest: nom du fichier destination
 *
 * Return: 0 si tout s’est bien passé, -1 si write() ou read() a échoué
 */
ssize_t copy_loop(int open_from, int open_to, char *array_stock, char *dest)
{
	ssize_t read_file, write_file; /*pour lire et écrire*/

	/*on va lire les 1024 char du file source tant que != 0*/
	while ((read_file = read(open_from, array_stock, 1024)) > 0)
	{
		/*on écris dans le fichier de destination ce qu'on stocker*/
		/*dans le tableau avec read_file*/
		write_file = write(open_to, array_stock, read_file);
		if (write_file == -1) /*vérifie si write() a échoué*/
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			close(open_from); /*ferme le fichier source*/
			close(open_to); /*ferme le fichier destination*/
			exit(99); /*si echec retourner 99*/
		}
	}
	return (read_file); /*retourne le nombre de char lu*/
}

/**
 * close_file - ferme un descripteur de fichier et gère les erreurs
 * @file: descripteur à fermer
 */
void close_file(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * main - copie le contenu d’un fichier dans un autre
 * @argc: nombre d’arguments
 * @argv: tableau d’arguments (nom du fichier source, puis destination)
 *
 * Return: 0 en cas de succès, ou codes d’erreur spécifiques :
 * 97 (mauvais usage), 98 (lecture impossible),
 * 99 (écriture impossible), 100 (fermeture échouée)
 */
int main(int argc, char *argv[])
{
	int open_from, open_to; /*pour ouvrir les fichiers*/
	ssize_t read_file; /*pour lire*/
	char array_stock[1024]; /*array de 1024 places*/

	if (argc != 3) /*vérifie le nombre d'arguments*/
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); /*si echec retourner 97*/
	}
	open_from = open(argv[1], O_RDONLY); /*fichier source*/
	if (open_from == -1) /*vérifie si open() a échoué*/
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); /*si echec retourner 98*/
	}
	open_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);/*file desti*/
	if (open_to == -1) /*vérifie si open() a échoué*/
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(open_from); /*fermer le fichier source*/
		exit(99); /*si echec retourner 99*/
	}
	read_file = copy_loop(open_from, open_to, array_stock, argv[2]);
	if (read_file == -1) /*cérifie si read() a échoué*/
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(open_from); /*ferme le fichier source*/
		close(open_to); /*ferme le fichier destination*/
		exit(98); /*si echec retourner 98*/
	}
	close_file(open_from);
	close_file(open_to);
	return (0); /*retourne 0 si tout va bien*/
}
