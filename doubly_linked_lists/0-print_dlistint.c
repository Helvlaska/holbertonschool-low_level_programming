#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Affiche tous les éléments d'une liste chaînée double
 * @h: Pointeur constant vers le premier nœud de la liste
 *
 * Cette fonction parcourt une liste chaînée double de type dlistint_t
 * et affiche la valeur entière contenue dans chaque nœud (champ n).
 * Elle utilise un pointeur temporaire pour naviguer de nœud en nœud,
 * en suivant les pointeurs next. À chaque itération, elle affiche la
 * valeur actuelle et incrémente un compteur.
 *
 * Return: Le nombre total de nœuds dans la liste.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0; /*initialisation d'un compteur de noeud*/
	const dlistint_t *cursor = h; /*ptr pour parcourir la liste de noeud*/

	while (cursor != NULL) /*tant que cursor n'arrive pas à null*/
	{
		printf("%d\n", cursor->n); /*on print la valeur de n*/
		cursor = cursor->next; /*on avance dans la liste*/
		count++; /*on incrémente count de 1 par noeud*/
	}
	return (count); /*on retourne le compteur*/
}
