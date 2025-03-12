#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Alloue de la mémoire pour un tableau et initialise à zéro.
 * @nmemb: Le nombre d'éléments à allouer.
 * @size: La taille de chaque élément.
 *
 * Return: Un pointeur vers le tableau alloué, ou NULL en cas d'échec.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*création du tableau*/
	char *array;
	/*varibale pour boucler*/
	unsigned int i;

	/*vérifie si nmemb ou size est vide*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	/*allocation mémoire*/
	array = malloc(nmemb * size);
	/*vérifie si l'allocation à réussie*/
	if (!array)
		return (NULL);
	/*boucle pour initialiser à 0 les éléments (nmemb)*/
	for (i = 0; i != '\0'; i++)
		array[i] = 0;
	return (array);
}
