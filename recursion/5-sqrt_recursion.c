#include "main.h"

/**
 * sqrt_test - test les valeurs de x pour trouver la racine
 * @n: nombre dont on cherche la racine carree
 * @x: valeur testee pour voir si x * x == n
 *
 * Return: la racine carree ou -1 si pas entiere
 */

/*fonction pour tester les valeurs de x*/
int sqrt_test(int n, int x)
{
	/*si x^2 depasse n, pas de racine carree naturelle*/
	if (x * x > n)
	{
		return (-1);
	}

	/*si x^2 == n, racine naturelle ok*/
	if (x * x == n)
	{
		return (x);
	}

	/*recursive en avant*/
	return (sqrt_test(n, x + 1));
}

/**
 * _sqrt_recursion - renvoie la racine carre d'un nb
 * @n: nb dont on veut trouver la racine carree
 *
 * Return: la racine carree ou -1 si pas entiere
 */

/*fonction principale retourne racine carree naturelle*/
int _sqrt_recursion(int n)
{
	/*les nb negatifs pas de racine carree naturelle*/
	if (n < 0)
	{
		return (-1);
	}

	/*appel de la fonction */
	/*recherche la racine carree en commencant par x=1*/
	return (sqrt_test(n, 1));
}
