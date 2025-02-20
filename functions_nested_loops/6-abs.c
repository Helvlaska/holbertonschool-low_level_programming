#include "main.h"
/**
 * _abs -  computes the absolute value of an integer.
 * @n: value
 *
 * Description: this function computes the absolute value of number.
 *
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-n);
	}
	return (0);
}
