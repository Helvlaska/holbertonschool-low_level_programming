#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - renvoie le nb d'éléments d'une liste chaînée double
 * @h: Pointeur constant vers le premier nœud de la liste
 *
 * Cette fonction parcourt une liste chaînée double de type dlistint_t.
 * Elle utilise un pointeur temporaire pour naviguer de nœud en nœud,
 * en suivant les pointeurs next. À chaque itération,
 * elle incrémente un compteur.
 *
 * Return: Le nombre total de nœuds dans la liste.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0; /*initialisation d'un compteur de noeud*/
	const dlistint_t *cursor = h; /*ptr pour parcourir la liste de noeud*/

	while (cursor != NULL) /*tant que cursor n'arrive pas à null*/
	{
		cursor = cursor->next; /*on avance dans la liste*/
		count++; /*on incrémente count de 1 par noeud*/
	}
	return (count); /*on retourne le compteur*/
}
