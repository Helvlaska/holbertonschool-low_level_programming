#include <stdio.h>
/**
 * main - print numbers of 0 to 9 with space and ,
 *
 * Return: 0 it's ok
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
