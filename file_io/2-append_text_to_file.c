#include <fcntl.h> /*open() et les flags O_RDONLY, etc*/
#include <unistd.h> /*pour read(), write(), close(), STDOUT_FILENO*/
#include <stdlib.h> /*pour malloc(), free()*/
#include "main.h"

/**
 * append_text_to_file - Ajoute du texte à la fin d’un fichier
 * @filename: Nom du fichier à modifier
 * @text_content: Chaîne à ajouter (NULL si aucun ajout)
 *
 * Return: 1 en cas de succès, -1 en cas d’échec
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, write_file; /*pour ouvrir et écrire*/
	int length = 0; /*compteur de char*/

	if (filename == NULL) /*vérifie si filename est vide*/
		return (-1); /*si echec retourner -1*/

	open_file = open(filename, O_WRONLY | O_APPEND);
	if (open_file == -1) /*vérifie si open() a échoué*/
		return (-1); /*si echec retourner -1*/

	if (text_content != NULL) /*vérifie si text_content est vide*/
	{
		while (text_content[length] != '\0') /*on parcours text_content*/
			length++; /*incrémenter la longueur*/

		write_file = write(open_file, text_content, length);
		/*vérifie si write a fail ou si write != de la length*/
		if (write_file == -1 || write_file != length)
		{
			close(open_file); /*fermer le fichier*/
			return (-1); /*si echec retourner -1*/
		}
	}
	close(open_file); /*fermer le fichier*/
	return (1); /*retourner 1 si tout c'est bien passé*/
}
