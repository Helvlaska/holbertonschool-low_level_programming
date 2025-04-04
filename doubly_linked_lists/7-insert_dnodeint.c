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

	if (idx == 0) /*si index[0] = head*/
		return (add_dnodeint(h, n)); /*on place le noeud au début*/

	if (h == NULL || (*h == NULL && idx != 0)) /*si h est vide et index > 0*/
		return (NULL); /*impossible = on renvoie null*/

	while (cursor != NULL) /*on parcour la liste de noeud*/
	{
		if (i == idx) /*si match entre i et l'index*/
		{
			new_noeud = malloc(sizeof(dlistint_t)); /*on alloue la mémoire*/
			if (!new_noeud) /*on vérifie l'allocation si nok*/
				return (NULL); /*si nok on renvoie null*/

			new_noeud->n = n; /*on initialise la valeur de new_noeud*/
			new_noeud->next = cursor; /*on pointe next sur le curseur*/
			new_noeud->prev = cursor->prev; /*on pointe prev sur le noeud pré*/

			if (cursor->prev) /*on vérifie si le noeud précédant = pas null*/
				cursor->prev->next = new_noeud;/*node préc next->sur new_node*/

			cursor->prev = new_noeud; /*node précé devient new_noeud*/

			if (new_noeud->prev == NULL) /*si new_noeud prev pointe sur null*/
				*h = new_noeud; /*il devient le head*/

			return (new_noeud); /*on retourne le nouveau noeud*/
		}
		cursor = cursor->next; /*on avance dans la liste*/
		i++; /*on avance sur l'index aussi*/
	}

	if (i == idx) /*si on arrive en fin de liste sans match i/idx*/
		return (add_dnodeint_end(h, n)); /*on place new_noeud à la fin*/

	return (NULL); /*si index > length de la liste on renvoie null*/
}
