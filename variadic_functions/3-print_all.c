#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - Affiche un caractère
 * @arguments: liste d'arguments variadiques
 */
void print_char(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}

/**
 * print_int - Affiche un entier
 * @arguments: liste d'arguments variadiques
 */
void print_int(va_list arguments)
{
	printf("%d", va_arg(arguments, int));
}

/**
 * print_float - Affiche un flottant
 * @arguments: liste d'arguments variadiques
 */
void print_float(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}

/**
 * print_string - Affiche une chaîne ou (nil)
 * @arguments: liste d'arguments variadiques
 */
void print_string(va_list arguments)
{
	char *str = va_arg(arguments, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Affiche tous les arguments selon le format
 * @format: chaîne indiquant les types des arguments (c, i, f, s)
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	int i = 0, j;
	char *sep = "";

	type_handler handlers[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(arguments, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == handlers[j].symbol)
			{
				printf("%s", sep);
				handlers[j].print_func(arguments);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(arguments);
	printf("\n");
}
