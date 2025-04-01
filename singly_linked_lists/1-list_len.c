#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - Compte le nombre d'éléments dans une liste_t
 * @h: pointeur vers la tête de la liste
 *
 * Cette fonction parcourt une liste chaînée de type list_t
 * et compte le nombre total de noeuds. Si l'un des noeuds contient
 * une chaîne NULL, la fonction retourne 1 immédiatement pour signaler
 * une erreur ou un noeud mal formé.
 *
 * Return: le nombre de noeuds si tout est correct, ou 1 si un str est NULL
 */
size_t list_len(const list_t *h)
{
	size_t count = 0; /*compteur de length*/

	while (h != NULL) /*on parcour la liste de noeuds*/
	{
		if (h->str == NULL) /*on vérifie si le noeud est vide*/
			return (1); /* retourne 1 d'erreur*/

		count++; /*on incrémente count*/
		h = h->next; /*on passe au noeud suivant*/
	}

	return (count); /*on retourne le compteur (length)*/
}
