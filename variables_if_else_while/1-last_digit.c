#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - recupere le dernier chiffre de n
 *
 *Return: 0 is ok
 */

int main(void)
{
	int n;
	int last_figure;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_figure = n % 10;
	printf("Last digit of %d", n);
	if (n > 0)
	{
		if (last_figure > 5)
		{
			printf(" is %d and is greater than 5", last_figure);
		}
		else if (last_figure == 0)
		{
			printf(" is %d and is 0", last_figure);
		}
		else if (last_figure < 6)
		{
			printf(" is %d and is less than 6 and not 0", last_figure);
		}
	}
	else
	{
		if (last_figure > 5)
		{
			printf(" is -%d and is greater than 5", last_figure);
		}
		else if (last_figure == 0)
		{
			printf(" is -%d and is 0", last_figure);
		}
		else if (last_figure < 6)
		{
			printf(" is -%d and is less than 6 and not 0", last_figure);
		}
	}
	return (0);
}
