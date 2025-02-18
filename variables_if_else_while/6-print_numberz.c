#include <stdio.h>
/**
 * main - print with putchar numbers of 0 to 9
 *
 * Return: 0 it's ok
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
