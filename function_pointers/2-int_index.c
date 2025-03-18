#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - vérifie si les autres fonctions de recherche de nb match
 * @array: un tableau de int
 * @size: la taille du tableau
 * @cmp: le ptr de lien aux autres fonctions
 *
 * Return: - 1 en cas d'échec sinon on return l'index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	/*variable de boucle*/
	int i;

	/*vérifie sur le tableau et le ptr sont vide*/
	if (array == 0 || cmp == 0)
		return (-1);
	/*vérifie si size est inf ou = à 0*/
	if (size <=  0)
		return (-1);

	/*boucle pour avancer dans l'array*/
	for (i = 0; i < size; i++)
	{
		/*si les fonctions de vérification != 0*/
		if (cmp(array[i]) != 0)
			/*on return l'index*/
			return (i);
	}

	return (-1);
}
