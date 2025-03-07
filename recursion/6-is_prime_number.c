#include "main.h"

/**
 * prime_test - teste combien de fois n est divisible
 * @n: est le nb potentiellement premier
 * @x: est le nombre avec lequel on divise n
 * @count_rec: est le compteur qui enregistre le nb d'iteration
 *
 *Return: soit 1 si n a seulement deux diviseurs sinon 0
 */

/*fonction pour tester le nb de x ou n est divisible et un compteur*/
int prime_test(int n, int x, int count_rec)
{
	/*si x est sup a n stop la recursive*/
	if (x > n)
	{
		/*retourne 1 si exactement 2 diviseurs sinon 0*/
		return (count_rec == 2);

	}
	/*si x est un diviseur de n*/
	if (n % x == 0)
	{
		/*on incremente le compteur*/
		count_rec++;
	}

	/*recursive en incrementant x de 1 a chaque fois*/
	return (prime_test(n, x + 1, count_rec));
}


/**
 * is_prime_number - renvoie si n est un nb premier
 * @n: est le nb interroger
 *
 * Return: nb premier 0 = nok 1 = ok
 */
/*fonction pour trouver les nb premier*/
int is_prime_number(int n)
{
	/*nb prem start a 2 donc on out 1 et nb negatifs*/
	if (n <= 1)
	{
		return (0);
	}

	/*on appelle la fonction de test avec x=1 et compteur=0*/
	return (prime_test(n, 1, 0));
}
