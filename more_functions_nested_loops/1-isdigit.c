#include "main.h"

/**
 * _isdigit -  checks for a digit (0 through 9)
 * @c: it's number
 *
 * Return: 1 is digit, 0 is other
 */

int _isdigit(int c)
{
	int number1 = '0';
	int number2 = '9';

	if (c >= number1 && c <= number2)
		return (1);
	else
		return (0);
}
