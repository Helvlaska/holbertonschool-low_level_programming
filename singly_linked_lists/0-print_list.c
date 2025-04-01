#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - Affiche tous les éléments d'une liste chaînée
 * @h: pointeur vers le premier élément de la liste (tête)
 *
 * Cette fonction parcourt une liste chaînée de type list_t.
 * Pour chaque noeud, elle affiche :
 * - La longueur de la chaîne (len)
 * - Le contenu de la chaîne (str), ou "(nil)" si str est NULL
 * Si la liste elle-même est NULL,
 * un message est affiché et rien n'est parcouru.
 *
 * Return: le nombre total de noeuds dans la liste
 */
size_t print_list(const list_t *h)
{
	size_t count = 0; /*compteur de length*/

	while (h != NULL) /*on parcour la liste de noeuds*/
	{
		if (h->str == NULL) /*on vérifie si le noeud est vide*/
			printf("[0] (nil)\n"); /* print message d'erreur*/
		else /*sinon print le noeud en cours*/
			printf("[%d] %s\n", h->len, h->str);

		count++; /*on incrémente count*/
		h = h->next; /*on passe au noeud suivant*/
	}

	return (count); /*on retourne le compteur (length)*/
}
