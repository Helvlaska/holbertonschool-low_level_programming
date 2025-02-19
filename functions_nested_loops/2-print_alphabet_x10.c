#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: 0 it's ok
 */

void print_alphabet_x10(void)
{
	int i;
	char c;
	char a = 'a';
	char z = 'z';

	for (i = 0; i <= 9; i++)
	{
		for (c = a; c <= z; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
