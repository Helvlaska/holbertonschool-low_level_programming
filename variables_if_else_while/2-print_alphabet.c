#include <stdio.h>
/**
 * main - for loop function to write alphabet
 *
 * Return: 0 it's ok
 */
int main(void)
{
	char i;
	char a = 'a';
	char z = 'z';

	for (i = a; i <= z; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
