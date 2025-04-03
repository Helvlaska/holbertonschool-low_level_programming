#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Récupère le nœud situé à un index donné
 * dans une liste doublement chaînée.
 * @head: Pointeur vers le début de la liste.
 * @index: Index du nœud à récupérer (commence à 0).
 *
 * Description :
 * Cette fonction parcourt la liste jusqu'à atteindre l'index spécifié,
 * puis retourne un pointeur vers le nœud correspondant. Si l’index est
 * hors limites, elle retourne NULL.
 *
 * Return: Adresse du nœud trouvé, ou NULL si l’index est invalide.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/*initialisation d'un ptr pour parcourir la liste*/
	dlistint_t *cursor = head;
	unsigned int i = 0; /*variable pour parcourir les index*/

	/*on parcour la liste jusqu'à la fin et on cherche l'index*/
	while (cursor != NULL)
	{
		if (i == index) /*si match*/
			return (cursor); /*on retourne la valeur du noeud*/

		cursor = cursor->next; /*on avance dans la liste*/
		i++; /*on avance aussi l'index*/
	}
	return (NULL); /*si l'index n'est pas trouvé dans la liste*/
}
