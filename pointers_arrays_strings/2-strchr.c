#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s : it's a string
 * @c: it's a char
 *
 * Return: modified string
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
