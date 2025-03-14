#include "dog.h"
#include <stdlib.h>
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
	/*ptr pour stocker les copies de name et owner*/
	char *copy_name, *copy_owner;
	/*compteurs de length*/
	int count_name, count_owner, i;
	/*on vérifie que name et owner != null*/
	if (name == NULL || owner == NULL)
		return (NULL);
	/*length de name et owner*/
	for (count_name = 0; name[count_name] != '\0'; count_name++)
	;
	for (count_owner = 0; owner[count_owner] != '\0'; count_owner++)
	;
	/*allocation mémoire dans la structure*/
	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);
	/*allocation mémoire pour la copie de name*/
	copy_name = malloc(count_name + 1);
	if (!copy_name)
	{
		free(new_dog);
		return (NULL);
	}
	/*allocation mémoire pour la copie de owner*/
	copy_owner = malloc(count_owner + 1);
	if (!copy_owner)
	{
		free(copy_name);
        free(new_dog);
		return (NULL);
	}
	/*copier name dans copy_name*/
	while (name[i] != '\0')
	{
		copy_name[i] = name[i];
		i++;
	}
	copy_name[i] = '\0';
	/*copier owner dans copy_owner*/
	while (owner[i] != '\0')
	{
		copy_owner[i] = owner[i];
		i++;
	}
	copy_owner[i] = '\0';
	/*initialiser la structure avec les nouvelles valeurs */
	new_dog->name = copy_name;
	new_dog->age = age;
	new_dog->owner = copy_owner;
	return (new_dog);
}
