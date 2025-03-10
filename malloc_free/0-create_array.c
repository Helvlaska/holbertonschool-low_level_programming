#include "main.h"
#include <stdlib.h>

/**
 * create_array - Crée un tableau de char et l'initialise avec un char donné
 * @size: Taille du tableau à allouer.
 * @c: Caractère avec lequel initialiser chaque élément du tableau.
 *
 * Return: Un pointeur vers le tableau alloué et initialisé,
 *         ou NULL si size est 0 ou si l'allocation échoue.
 */

char *create_array(unsigned int size, char c)
{
	/*variable pour boucler*/
	unsigned int i;
	/*variable de type char pour créer l'array*/
	char *array;

	/*Retourne NULL si emplacement vide  */
	if (size == 0)
	{
		return (NULL);
	}
	/*creer un array lui alouer size en taille de type char*/
	array = malloc(size * sizeof(char));
	/*si allocation impossible, retourne NULL*/
	if (array == NULL)
	{
		return (NULL);
	}
	/*remplir le array avec la valeur c*/
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	/*retourne le pointeur vers le array*/
	return (array);
}
