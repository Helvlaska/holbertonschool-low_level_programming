#include "variadic_functions.h"
#include <stdarg.h> /*bibliothèque pr use variadique fonction*/
#include <stdio.h> /*bibliothèque pr use printf*/
#include <stdlib.h> /*bibliothèque pr use NULL*/

/**
 * print_char - Affiche un caractère
 * @arguments: liste d'arguments variadiques
 */

void print_char(va_list arguments)
{
	int c = va_arg(arguments, int); /*Les char sont promus en int*/

	printf("%c", c);
}

/**
 * print_int - Affiche un entier
 * @arguments: liste d'arguments variadiques
 */

void print_int(va_list arguments)
{
	int n = va_arg(arguments, int);

	printf("%d", n);
}

/**
 * print_float - Affiche un nombre flottant
 * @arguments: liste d'arguments variadiques
 */

void print_float(va_list arguments)
{
	double f = va_arg(arguments, double); /*Les float sont promus en double*/

	printf("%f", f);
}

/**
 * print_string - Affiche une chaîne de caractères, ou (nil) si NULL
 * @arguments: liste d'arguments variadiques
 */

void print_string(va_list arguments)
{
	char *str = va_arg(arguments, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Affiche tout type d'arguments selon le format donné
 * @format: chaîne de format contenant les types (c, i, f, s)
 * @...: arguments variadiques à afficher
 */

void print_all(const char * const format, ...)
{
	va_list arguments; /*variable pour lire tout les arguments*/

	int i = 0; /*variable d'index dans une boucle*/

	/*variable pour dire où commence la lecture des args*/
	va_start(arguments, format);

	while (format[i]) /*boucle pour parcourir "format"*/
	{
		switch (format[i])
		{
			case 'c':
				print_char(arguments);
				break;

			case 'i':
				print_int(arguments);
				break;

			case 'f':
				print_float(arguments);
				break;

			case 's':
				print_string(arguments);
				break;

			default:
				break;
		}
		if (format[i + 1] != '\0') /*tant qu'on est pas au dernier argument*/
		{
			printf(", "); /*on met un separateur*/
		}
		i++; /*on avance dans format*/
	}
	printf("\n"); /*retour à la ligne*/
	/*on ferme notre parcours de la liste pour éviter la fuite de mémoire*/
	va_end(arguments);
}
