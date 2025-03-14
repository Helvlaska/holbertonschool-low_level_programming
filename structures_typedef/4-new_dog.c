#include "dog.h"
#include <stdlib.h>

/**
 * copy_string - Alloue et copie name et owner dans une structure dog_t
 * @new_dog: Pointeur vers la structure à remplir
 * @name: Chaîne à copier pour le champ name
 * @owner: Chaîne à copier pour le champ owner
 *
 * Return: 1 si succès, 0 si échec
 */

int copy_string(dog_t *new_dog, char *name, char *owner)
{
	int count_name, count_owner, i = 0, j = 0;

	/* Calcul de la longueur de name et owner */
	for (count_name = 0; name[count_name] != '\0'; count_name++)
		;
	for (count_owner = 0; owner[count_owner] != '\0'; count_owner++)
		;

	/* Allocation mémoire pour name */
	new_dog->name = malloc(count_name + 1);
	if (!new_dog->name)
		return (0);

	/* Allocation mémoire pour owner */
	new_dog->owner = malloc(count_owner + 1);
	if (!new_dog->owner)
	{
		free(new_dog->name);
		return (0);
	}

	/* Copier name */
	while (name[i] != '\0')
	{
		new_dog->name[i] = name[i];
		i++;
	}
	new_dog->name[i] = '\0';

	/* Copier owner */
	while (owner[j] != '\0')
	{
		new_dog->owner[j] = owner[j];
		j++;
	}
	new_dog->owner[j] = '\0';

	return (1);
}

/**
 * new_dog - Crée un nouveau chien
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 *
 * Return: Pointeur vers la nouvelle structure dog_t ou NULL en cas d'échec.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/*ptr vers la nouvelle structure (typedef)*/
	dog_t *new_dog;

	/* Vérifier que name et owner ne sont pas NULL */
	if (name == NULL || owner == NULL)
		return (NULL);

	/* Allocation mémoire pour la structure */
	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	/* Appel de la fonction qui alloue et copie les chaînes */
	if (!copy_string(new_dog, name, owner))
	{
		free(new_dog);
		return (NULL);
	}

	/* Initialiser l'âge */
	new_dog->age = age;

	return (new_dog);
}
