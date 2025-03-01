#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: it's string two
 * @dest: two string assembly
 *
 * Return: start dest string
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest; /*balise pour revenir au debut de dest*/

	while (*dest) /*aller a la fin de dest pour y coller src*/
	{
		dest++;
	}

	while (*src) /*copier src a la suite de dest*/
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0'; /*on ajoute le caractere final*/

	return (start); /*on reviens au debut de dest*/
}
