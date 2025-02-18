#include <stdio.h>
/**
 * main - print numbers of 0 to 9 & letters of a to f
 *
 * Return: 0 it's ok
 */

int main(void)
{
	int i;
	char a = 'a';
	char f = 'f';

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (i = a; i <= f; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
