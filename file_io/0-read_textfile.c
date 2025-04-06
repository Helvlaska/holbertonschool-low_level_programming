#include <fcntl.h> /*open() et les flags O_RDONLY, etc*/
#include <unistd.h> /*pour read(), write(), close(), STDOUT_FILENO*/
#include <stdlib.h> /*pour malloc(), free()*/
#include "main.h"

/**
 * read_textfile - Lit un fichier texte et l'affiche sur la sortie standard
 * @filename: Nom du fichier à lire
 * @letters: Nombre maximum de caractères à lire et afficher
 *
 * Return: Le nombre réel de caractères lus et affichés,
 *         ou 0 si une erreur survient (fichier inexistant, lecture/écriture échouée, etc.)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int open_file; /*descripteur de fichier*/
	ssize_t read_file; /*variable pour utiliser read()*/
	ssize_t write_file; /*variable pour utiliser write()*/
	char *array_stock; /*initalisation d'un tableau pour stocker char*/
	size_t count = 0; /*compteur de char*/

	if (filename == NULL || letters == 0) /*si le fichier est vide*/
		return (0); /*echec fichier vide*/

	open_file = open(filename, O_RDONLY); /*Ouvrir le fichier + lecture seule*/
	if (open_file == -1) /*si open() a échoué*/
		return (0); /*echec ouverture fichier*/

	array_stock = malloc(sizeof(char) * letters); /*allocation mémoire array*/
	if (array_stock == NULL) /*si malloc() a échoué*/
	{
		close(open_file); /*fermer le fichier*/
		return (0); /*retourne null*/
	}

	while (count < letters) /*on parcours le fichier jusqu'à letters*/
	{
		/*lire (le fichier dans le tableau jusqu'à letters = 0)*/
		read_file = read(open_file, array_stock, letters - count);
		if (read_file <= 0) /*si read() a échoué*/
			break; /*sortir de la boucle*/

		/*écrire (sur terminal(stdout), les char lus(read_file) du array*/
		write_file = write(STDOUT_FILENO, array_stock, read_file);
		if (write_file != read_file) /*si write() fail*/
		{
			free(array_stock); /*libérer le buffer*/
			close(open_file); /*fermer le fichier*/
			return (0); /*retourne null*/
		}
		count += write_file; /*incrémenter le compteur*/
	}
	free(array_stock); /*libérer le buffer*/
	close(open_file); /*fermer le fichier*/
	return (count); /*retourner le compteur*/
}
