#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Alloue de la mémoire avec malloc et vérifie son succès.
 * @b: Taille de la mémoire à allouer en octets.
 *
 * Return: Un pointeur vers la mémoire allouée.
 *         Si l'allocation échoue, la fonction stop le programme ac `exit(98)`
 */

void *malloc_checked(unsigned int b)
{
	/*creation d'un pointeur*/
	int *array;

	/*on vérifie si b est vide*/
	if (b == 0)
	{
		return (NULL);
	}

	/*on alloue la mémoire*/
	/*on ne précise pas le type car b peut être n'imp*/
	array = malloc(b);
	/*si échec alloc on ferme le programme*/
	if (!array)
	{
		exit(98);
	}
	/*si ok on retourne le pointeur*/
	return (array);

}
