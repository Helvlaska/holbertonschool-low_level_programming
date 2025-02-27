#include "main.h"

/**
 * puts2 -  prints every other character of a string, starting with the first
 * character, followed by a new line
 * @str: it's a string
 *
 */

void puts2(char *str)
{
	while (*str != '\0') /*Tant qu'on est pas a la fin de la string */
	{
		_putchar(*str); /*Affiche le char actuel*/
		str++; /*Avance d'1 char*/
		if (*str == '\0') /*verifie que ce n'est pas la fin*/
			break; /*fin de la boucle*/
		str++; /*Avance d'1 char*/
	}
	_putchar('\n');
}
