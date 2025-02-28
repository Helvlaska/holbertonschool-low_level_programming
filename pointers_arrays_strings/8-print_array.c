#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * @a: it's array
 * @n: is the number of elements of the array to be printed
 *
 */

void print_array(int *a, int n)
{
	int i;

	/*boucle qui print n fois et avance de 1*/
	for (i = 0; i < n; i++)
	{
		/*print la valeur de l'index sur lequel pointe mon pointeur*/
		printf("%d", a[i]);
		/*condition pour pointer sur l'array sauf la derniere valeur*/
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
