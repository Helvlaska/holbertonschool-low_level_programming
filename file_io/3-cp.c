#include <fcntl.h> /*open() et les flags O_RDONLY, etc*/
#include <unistd.h> /*pour read(), write(), close(), STDOUT_FILENO*/
#include <stdio.h> /*pour dprintf()*/

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
	ssize_t read_file, write_file; /*pour lire et écrire*/
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

	/*on va lire les 1024 char du file source tant que != 0*/
	while ((read_file = read(open_from, array_stock, 1024)) > 0)
	{
		/*on écris dans le fichier de destination ce qu'on stocker*/
		/*dans le tableau avec read_file*/
		write_file = write(open_to, array_stock, read_file);
		if (write_file == -1) /*vérifie si write() a échoué*/
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(open_from); /*ferme le fichier source*/
			close(open_to); /*ferme le fichier destination*/
			exit(99); /*si echec retourner 99*/
		}
	}
	if (read_file == -1) /*cérifie si read() a échoué*/
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(open_from); /*ferme le fichier source*/
		close(open_to); /*ferme le fichier destination*/
		exit(98); /*si echec retourner 98*/
	}
	if (close(open_from) == -1) /*ferme le fichier source*/
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_from);
		exit(100); /*si echec retourner 100*/
	}
	if (close(open_to) == -1) /*ferme le fichier destination*/
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_to);
		exit(100);	/*si echec retourner 100*/
	}
	return (0); /*retourne 0 si tout va bien*/
}
