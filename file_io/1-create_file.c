#include <fcntl.h> /*open() et les flags O_RDONLY, etc*/
#include <unistd.h> /*pour read(), write(), close(), STDOUT_FILENO*/
#include <stdlib.h> /*pour malloc(), free()*/
#include "main.h"

/**
 * create_file - Crée un fichier et y écrit une chaîne de caractères
 * @filename: Nom du fichier à créer
 * @text_content: Chaîne à écrire dans le fichier (NULL pour fichier vide)
 *
 * Return: 1 si succès, -1 si erreur (création/écriture échouée)
 */
int create_file(const char *filename, char *text_content)
{
	int open_file, write_file; /*pour ouvrir et écrire*/
	int length = 0; /*compteur de char*/

	if (filename == NULL) /*vérifie si le fichier n'est pas vide*/
		return (-1); /* Retourner -1 si filename est NULL */

	open_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (open_file == -1) /*vérifie si l'ouverture du fichier a fail*/
		return (-1); /* Retourner -1 si open échoue */

	if (text_content != NULL) /*vérifie si text_content est NULL*/
	{
		while (text_content[length] != '\0') /*compte le nombre de char*/
			length++; /*incrémenter le compteur*/

		write_file = write(open_file, text_content, length);
		/*vérifie write() a fail ou si write != de la length*/
		if (write_file == -1 || write_file != length)
		{
			close(open_file); /*fermer le fichier*/
			return (-1); /* Retourner -1 si write échoue */
		}
	}
	close(open_file); /*fermer le fichier*/
	return (1); /* Retourner 1 si l'écriture réussit */
}
