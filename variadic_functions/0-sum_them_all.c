#include "variadic_functions.h"
#include <stdarg.h> /*bibliothèque pr use variadique fonction*/
#include <stdio.h> /*bibliothèque pr use printf*/
#include <stdlib.h> /*bibliothèque pr use NULL*/

/**
 * sum_them_all - la fonction additionne les arguments passé
 * à la fonction.
 * @n: le nombre d'arguments passé  à la fonction
 *
 * Return: le résultat de l'addition
 */

/*fonction qui va additionner tout les args ensemble*/
/*type fontion_name(nb d'arg constant, args...)*/
int sum_them_all(const unsigned int n, ...)
{
	/*variable pour lire tout les arguments, n compris*/
	va_list arguments;

	/*variable pour stocker le resultat*/
	int result = 0;
	/*variable de boucle*/
	unsigned int i;

	/*variable pour dire où commence la lecture des args*/
	/*on ne veut pas le nb d'arguments donc on exit cet arg*/
	va_start(arguments, n);

	/*boucle pour itérer sur n (nb d'arguments)*/
	for (i = 0; i < n; i++)
	{
		/*va_arg : selectionne un arg dans les arguments qui sont des int*/
		/*et l'ajoute à result*/
		result += va_arg(arguments, int);
	}
	/*on ferme notre parcours de la liste pour éviter la fuite de mémoire*/
	va_end(arguments);

	/*on return le resultat*/
	return (result);
}
