#include <stdio.h>
/**
 * main - for loop to write alphabet in non caps and caps
 *
 * Return: 0 it's ok
 */

int main(void)
{
	char i;
	char a = 'a';
	char z = 'z';
	char A = 'A';
	char Z = 'Z';

	for (i = a; i <= z; i++)
	{
		putchar(i);
	}
	for (i = A; i <= Z; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
