#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: it's a caracters chain
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
