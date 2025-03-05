#include "main.h"

/**
 * _puts_recursion -  prints a string, followed by a new line
 * *s: it's  a string
 *
 */

void _puts_recursion(char *s)
{
	if (*s == 0) /*cas de base si s = 0 on stop*/
	{
		_putchar('\n'); /*sortie de la recursion retour a la ligne*/
		return; /*equivaut a break dans une boucle*/
	}
	_putchar(*s); /*affiche le char*/
	s++; /*on diminue de 1*/
	_puts_recursion(s); /*on relance la fonction*/
}
