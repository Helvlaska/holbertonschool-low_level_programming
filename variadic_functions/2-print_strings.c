#include "variadic_functions.h"
#include <stdarg.h> /*bibliothèque pr use variadique fonction*/
#include <stdio.h> /*bibliothèque pr use printf*/
#include <stdlib.h> /*bibliothèque pr use NULL*/

/**
 * print_strings - Affiche des chaînes de caractères séparées
 * par un séparateur
 * @separator: Chaîne de séparation à afficher entre chaque mot
 * @n: nombre de chaînes passées
 * @...: les chaînes de caractères à afficher
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	/*variable pour lire tout les arguments*/
	va_list arguments;

	/*variable de boucle*/
	unsigned int i;
	/*on déclare un pointeur vers char pour lire les string*/
	char *mot;

	/*variable pour dire où commence la lecture des args*/
	/*on ne veut pas le nb d'arguments donc on exit cet arg*/
	va_start(arguments, n);

	/*boucle pour parcourir les arguments de la fonction*/
	for (i = 0; i < n; i++)
	{
		/*initialise nombre avec la valeurs d'un int a chaque tour*/
		mot = va_arg(arguments, char *);

		/*on verifie que le mot est ok*/
		if (mot != NULL)
		{
			printf("%s", mot);
		}
		else
		{
			printf("(nil)");
		}

		/*on verifie que separator est ok et qu'on est pas la fin des args*/
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	/*on ferme notre parcours de la liste pour éviter la fuite de mémoire*/
	va_end(arguments);
}
