#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: it's a string
 * @s2: it's a string
 *
 * Return: 0 it's ok
 */

int _strcmp(char *s1, char *s2)
{
	int count = 0;

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			count = (*s1 - *s2);
			break;
		}
		else
		{
			s1++;
			s2++;
		}
	}
	return (count);
}
