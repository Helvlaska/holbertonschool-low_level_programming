#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square of integers
 * @a: pointer of array
 * @size: size of array
 *
 */

/* array 2D : */

/* {1; 2; 3}*/
/* {4; 5; 6}*/
/* {7; 8; 9}*/

/*array mono ligne:*/

/*  1     2     3     4     5     6     7     8     9*/
/*a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8]*/

void print_diagsums(int *a, int size)
{
	int l; /*var ligne car array mono ligne*/
	int sum_diag_one = 0; /*somme de la diag one*/
	int sum_diag_two = 0; /*somme de la diag two*/

	/*boucle pour parcourir l'array mono ligne*/
	for (l = 0; l < size; l++)
	{
		/*ex : a[0][0] : a[0 * 3 + 0] : a[0]*/
		sum_diag_one += a[l * size + l];
		/*ex : a[3][0] : a[3 * 3 + (3 - 1 - 3)] : a[8]*/
		sum_diag_two += a[l * size + (size - 1 - l)];
	}
	printf("%d, %d\n", sum_diag_one, sum_diag_two);
}
