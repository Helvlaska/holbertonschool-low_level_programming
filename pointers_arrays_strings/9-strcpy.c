#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointeur copie
 * @src: pointeur a copier
 *
 * Return: 0 it's ok
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest; /*save ptr de depart de dest*/

	/*boucle pr copier/coller*/
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0'; /*on ajoute manuellement le char de fin de string*/

	/*while nous a emmener a la fin de la string
	 il faut revenir au debut avec start et return*/
	return (start);
}
