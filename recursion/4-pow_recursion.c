#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y
 * @x: it's a number
 * @y: it's racine de x
 *
 * Return: y ou -1 si y < 0
 */

int _pow_recursion(int x, int y)
{
	/*cas de base : x^0 = 1*/
	if (y == 0)
	{
		return (1);
	}
	/*cas de base pour gerer si y negatif*/
	else if (y < 0)
	{
		return (-1);
	}

	/*x puissance on appel la fonction*/
	/*avec x en parametre et la decrementation de y*/
	return (x * _pow_recursion(x, y - 1));
}
