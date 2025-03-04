#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: it's a string
 * @accept: it's char found
 *
 * Return: modified string
 */

char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		accept = start;

		while (*accept)
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		s++;
	}
	return (0);
}
