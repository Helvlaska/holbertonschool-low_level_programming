#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Insère un nouveau nœud à une
 * position donnée dans une liste doublement chaînée.
 * @h: Double pointeur vers le début de la liste.
 * @idx: Index où insérer le nouveau nœud (commence à 0).
 * @n: Valeur entière à stocker dans le nouveau nœud.
 *
 * Description :
 * Cette fonction insère un nouveau nœud contenant la valeur 'n'
 * à la position 'idx' dans la liste. Si l’index est 0, le nœud
 * est ajouté en tête. S’il correspond à la fin de la liste,
 * il est ajouté en queue. Sinon, le nœud est inséré entre deux
 * nœuds existants, avec mise à jour correcte des pointeurs 'prev' et 'next'.
 * En cas d’échec (allocation ou index invalide), la fonction retourne NULL.
 *
 * Return: Adresse du nouveau nœud, ou NULL si l’insertion échoue.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cursor = *h; /*ptr pour parcourir la liste de noeud*/
	dlistint_t *new_noeud; /*nouveau noeud*/
	unsigned int i = 0; /*variable pour suivre l'index*/

	if (idx == 0) /*si l'index[0]*/
		return (add_dnodeint(h, n)); /*nouveau noeud devient head*/

	if (h == NULL || (*h == NULL && idx != 0)) /*si h est vide et index != 0*/
		return (NULL); /* si vide il peu pas y avoir d'index positif = null*/

	while (cursor != NULL) /*on parcour toute la liste*/
	{
		if (cursor == NULL) /*si on arrive à la fin de la liste*/
			return (add_dnodeint_end(h, n)); /*on place le new_noeud à la fin*/

		if (i == idx) /*si match d'index*/
		{
			/*allocation de la mémoire pour le nouveau moeud*/
			new_noeud = malloc(sizeof(dlistint_t));

			if (!new_noeud) /*on vérifie si l'allocation fail*/
				return (NULL); /*si echec renvoie null*/

			new_noeud->n = n; /*initialisation de la valeur*/
			new_noeud->next = cursor; /*on fix notre noeud next au idx*/
			new_noeud->prev = cursor->prev; /*cursor->prev = (idx - 1)*/

			if (cursor->prev) /*vérifie si y a un noeud avant cursor*/
				/*le noeud précé(prev) cursor sont next pointe le new_noeud*/
				cursor->prev->next = new_noeud;

			cursor->prev = new_noeud; /*noeud pprécédent pointe sur new_noeud*/
		}
		cursor = cursor->next; /*on avance dans la liste de noeuds*/
		i++; /*on avance aussi dans l'index*/
	}
	return (new_noeud); /*on retourne le nouveau noeud*/
}
