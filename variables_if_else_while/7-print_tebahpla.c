#include <stdio.h>
/**
 * main - print revert alphabet
 *
 * Return: 0 it's ok
 */

int main(void)
{
	int i;
	char a = 'a';
	char z = 'z';

	for (i = z; i >= a; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
