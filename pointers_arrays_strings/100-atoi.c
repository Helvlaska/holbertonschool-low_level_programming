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
	int result = 0; /*stock le nb entier*/
	int sign = 1; /*gere les nb negatif*/
	int first_digit = 0; /*true/false found digit*/
	int max_digit = 2147483647; /*overflow max*/
	int min_digit = -2147483648; /*overflow min*/
	int digit; /*var pr convertir char en int*/

    while (*s) /*on parcours la string*/
	{
		if (*s == '-') /*si '-' ds string...*/
			sign *= -1; /*...sign devient -1*/

		if (*s >= '0' && *s <= '9') /*si c'est un int...*/
		{
			digit = *s - '0'; /*convertir le char en int*/
			
			/*on verifie l'overflow*/
			if (result > (max_digit - digit) / 10)
			{
				if (sign == 1) /*si trop grand...*/
				{
					return (max_digit);
				}
				else /*si trop petit...*/
				{
                    return (min_digit);
                }
			}

			result = result * 10 + (*s - '0'); /*add chaque digit*/
			first_digit = 1; /*1 veu dire true*/
		}
		else if (first_digit) /*si first_digit ok, fonction stop*/
			break;
		s++; /*on avance ds la string*/
	}

	return (result * sign); /*on renvoie l'entier * (1 ou -1)*/
}
