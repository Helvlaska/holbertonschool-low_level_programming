#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest:  memory area
 * @src:  memory area
 * @n: bytes
 *
 * Return: modified memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest; /*balise pour revenir au debut*/
	unsigned int i = 0; /*compteur de nb de caracteres copier*/

	/*boucle pour copier src et coller dans dest n caracteres*/
	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	return (start);
}
