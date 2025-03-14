#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Libère la mémoire allouée pour un chien
 * @d: Pointeur vers la structure dog_t à libérer
 *
 * Description: Cette fonction libère la mémoire utilisée
 * pour stocker un chien, y compris les copies de name et owner.
 */

void free_dog(dog_t *d)
{
	/*vérifier si d est NULL*/
	if (d == NULL)
		return;

	/*libérer la mémoire allouée pour name et owner*/
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);

	/*libérer la mémoire de la structure*/
	free(d);
}
