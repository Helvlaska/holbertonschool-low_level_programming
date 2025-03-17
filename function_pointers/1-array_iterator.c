#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - appel action pour chaque int de array
 * @array: tableau de int
 * @size: est la taille du tableau
 * @action: est le ptr sur fonction
 */

/*fonction qui ne retourne rien (void)*/
/*on pointe sur un array de int qui à une taille de size*/
/*pour chaque int on fait appel a *action*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/*variable de boucle*/
	size_t i;

	/*vérifie si size et action vaut null*/
	if (size == 0 || action == NULL || array == 0)
		return;

	/*boucle pour itérer dans l'array*/
	for (i = 0; i < (size); i++)
	{
		/*appel action en itérant sur chaque int de array*/
		action(array[i]);
	}
}
