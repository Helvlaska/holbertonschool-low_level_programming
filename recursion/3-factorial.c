#include "main.h"

/**
 * factorial -  returns the factorial of a given number
 * @n: it's a parametre number
 *
 * Return: -1 to indicate an error, 0 it's ok
 */

int factorial(int n)
{
	/*cas de base quand n = 0 on stop*/
	if (n == 0)
	{
		/*on return un nb positif*/
		return (1);
	}
	/*cas de base quand n < 0 on stop*/
	else if (n < 0)
	{
		/*on return un nb negatif*/
		return (-1);
	}

	/*factorielle: on avance et on recule en multipliant*/
	return (n * factorial(n - 1));
}
