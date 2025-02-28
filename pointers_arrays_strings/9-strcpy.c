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

	while (*src) /*boucle pr copier/coller*/
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0'; /*on ajoute manuellement le char de fin de string*/

	return (start); /*retour en debut de string avec start + return*/
}
