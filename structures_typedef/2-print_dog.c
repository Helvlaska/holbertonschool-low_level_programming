#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Affiche les informations d'une structure dog
 * @d: Pointeur vers la structure à afficher
 *
 * Description: Si un élément est NULL, il affiche "(nil)".
 * Si d est NULL, il n'affiche rien.
 */

void print_dog(struct dog *d)
{
	/*vérifier si d est null*/
	if (d == NULL)
		return;

	/*vérifier si name est null*/
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	/*on affiche l'âge sans if (float ne peut pas être null)*/
	printf("Age: %.6f\n", d->age);

	/*vérifier si owner est null*/
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
