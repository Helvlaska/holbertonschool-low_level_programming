#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: is character
 *
 * Return: 1 if c is uppercase 0 if other
 */

int _isupper(int c)
{
	int A = 'A';
	int Z = 'Z';

	if (c >= A && c <= Z)
		return (1);
	else
		return (0);
}
