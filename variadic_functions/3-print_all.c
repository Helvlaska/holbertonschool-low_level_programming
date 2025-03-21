#include "variadic_functions.h"
#include <stdarg.h> /*bibliothèque pr use variadique fonction*/
#include <stdio.h>  /*bibliothèque pr use printf*/
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
 * print_string - Affiche une chaîne ou (nil) si NULL
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
 * print_all - Affiche tous les arguments selon format
 * @format: chaîne de format (c, i, f, s)
 * @...: arguments variadiques
 */
void print_all(const char * const format, ...)
{
	va_list arguments; /*variable pour lire tous les arguments*/
	int i = 0, j, printed; /*index boucle et flag affichage*/

	va_start(arguments, format); /*start lecture args*/

	while (format && format[i]) /*parcours de format*/
	{
		printed = 0;
		switch (format[i])
		{
			case 'c':
				print_char(arguments);
				printed = 1;
				break;
			case 'i':
				print_int(arguments);
				printed = 1;
				break;
			case 'f':
				print_float(arguments);
				printed = 1;
				break;
			case 's':
				print_string(arguments);
				printed = 1;
				break;
			default:
				break;
		}
		if (printed) /*vérifie s'il faut un séparateur*/
		{
			j = i + 1;
			while (format[j]) /*cherche un prochain type valide*/
			{
				if (format[j] == 'c' || format[j] == 'i' ||
				    format[j] == 'f' || format[j] == 's')
				{
					printf(", "); /*affiche séparateur*/
					break;
				}
				j++;
			}
		}
		i++;
	}
	printf("\n"); /*retour à la ligne*/
	va_end(arguments); /*nettoie la liste d'arguments*/
}
