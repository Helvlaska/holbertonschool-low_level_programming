#include <stdio.h>
/**
 * main - print alphabet not q and e
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
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
