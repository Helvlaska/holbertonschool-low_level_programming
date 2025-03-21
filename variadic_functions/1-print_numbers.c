#include "variadic_functions.h"
#include <stdarg.h> /*bibliothèque pr use variadique fonction*/
#include <stdio.h> /*bibliothèque pr use printf*/
#include <stdlib.h> /*bibliothèque pr use NULL*/

/**
 * print_numbers - affiche une liste d'entiers séparés par un séparateur
 * @separator: chaîne à afficher entre chaque nombre (ex: \", \")
 * @n: nombre d'entiers passés en arguments
 * @...: les entiers à afficher
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	/*variable pour lire tout les arguments*/
	va_list arguments;

	/*variable de boucle*/
	unsigned int i;
	/*variable pour récupérer les int des arguments*/
	int nombres;

	/*variable pour dire où commence la lecture des args*/
	/*on ne veut pas le nb d'arguments donc on exit cet arg*/
	va_start(arguments, n);

	/*boucle pour parcourir les arguments de la fonction*/
	for (i = 0; i < n; i++)
	{
		/*initialise nombre avec la valeurs d'un int a chaque tour*/
		nombres = va_arg(arguments, int);
		printf("%d", nombres);

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
