#include "main.h"
/**
 * _islower - checks if character is an lowercase
 * @c: verified character
 *
 * Description: This function take an character in entry
 * and verified if an lowercase or uppercase
 *
 * Return: 1 if character is lowercase, else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
