#include "main.h"

/**
 * _strncpy -  copies a beggin string
 * @dest: assembly string
 * @src: it's string to be copied
 * @n: number of caracters copied
 *
 * Return: assembly string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;
	int i = 0; /*compteur de nb de caracters copier*/

	/*boucle pour copier et coller en debut de string*/
	while (*src && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	while (i < n)
	{
		*dest = '\0';
		i++;
	}

	return (start);
}
