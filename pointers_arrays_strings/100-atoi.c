#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: it's a string
 *
 * Return: 0 it's ok
 */

int _atoi(char *s)
{
	int result = 0; /*le nb entier*/
	int sign = 1; /*pr gerer les nb negatif*/
	int first_digit = 0; /*1er nb trouve*/

	while (*s) /*on parcours la string*/
	{
		if (*s == '-') /*si '-' ds string...*/
			sign *= -1; /*...sign devient -1*/

		if (*s >= '0' && *s <= '9') /*si c'est un nb...*/
		{
			result = result * 10 + (*s - '0'); /*add chaque digit*/
			first_digit = 1; /*1 veu dire true*/
		}
		else if (first_digit) /*si first_digit ok, fonction stop*/
			break;
		s++; /*on avance ds la string*/
	}

	return (result * sign); /*on renvoie l'entier * (1 ou -1)*/
}
