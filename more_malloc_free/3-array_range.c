#include "main.h"
#include <stdlib.h>

/**
 * array_range - Crée un tableau d'entiers allant de min à max inclus.
 * @min: La valeur minimale incluse dans le tableau.
 * @max: La valeur maximale incluse dans le tableau.
 *
 * Return: Un pointeur vers le tableau nouvellement alloué.
 *         NULL si min > max ou si l'allocation échoue.
 */

int *array_range(int min, int max)
{
	/*création d'un array*/
	/*variables de boucles*/
	int *array, i;

	/*gérer si min > max*/
	if (min > max)
		return (NULL);

	/*allocation de la mémoire nécessaire*/
	array = malloc(sizeof(int) * (max - min + 1));
	if (!array)
		return (NULL);

	/*boucle pour initialiser le tableau*/
	for (i = 0; i < (max - min + 1); i++)
		array[i] = min + i;

	return (array);
}
