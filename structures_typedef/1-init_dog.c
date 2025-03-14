#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialise une variable de type struct dog
 * @d: Pointeur vers la structure à initialiser
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Nom du propriétaire
 *
 * Description: Si d est NULL, la fonction ne fait rien.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*vérifier que d n'est pas nul*/
	if (d == NULL)
		return;

	/*dans mon tableau "d" le paramètre de la fonction*/
	/*prend la valeur du champ de la structure*/
	d->name = name;
	d->age = age;
	d->owner = owner;
}
