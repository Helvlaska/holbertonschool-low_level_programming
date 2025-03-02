#include "main.h"

/**
 * _strncat -  concatenates two strings up to n
 * @dest: assembly two string
 * @src: it's the second string
 * @n: n is the number of characters to retrieve in src
 *
 * Return: start dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *start = dest; /*balise pour revenir au debut*/
	int i; /*compteur du nb de caracteres copier*/

	/*boucle pour se positionner en fin de string*/
	while (*dest)
	{
		dest++;
	}

	/*boucle pour copier n caracteres de src*/
	while (*src && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0'; /*on ajoute le carateres de fin de string*/

	return (start); /*on revient au debut de dest et on renvoie la string*/
}
