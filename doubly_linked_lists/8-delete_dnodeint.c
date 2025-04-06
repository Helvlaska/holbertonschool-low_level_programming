#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Supprime le nœud à un index donné
 * d'une liste doublement chaînée.
 * @head: Double pointeur vers le début de la liste.
 * @index: Index du nœud à supprimer (commence à 0).
 *
 * Description :
 * Cette fonction supprime le nœud situé à l’index donné. Elle met à
 * jour les pointeurs 'prev' et 'next' des nœuds adjacents pour conserver
 * l’intégrité de la liste. Si le nœud supprimé est le head,
 * le pointeur head est mis à jour.
 *
 * Return: 1 en cas de succès,
 * -1 si l’opération échoue (liste vide ou index invalide).
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cursor = *head; /*pointeur pour parcourir la liste*/
	unsigned int i = 0; /*compteur d’index*/

	if (head == NULL || *head == NULL) /*si le ptr est NULL ou si liste vide */
		return (-1);

	if (index == 0) /*si on veut supprimer le premier node*/
	{
		*head = cursor->next; /*le node suivant devient le head*/
		if (*head) /*si le head n’est pas NULL*/
			(*head)->prev = NULL; /*le prev du head devient NULL*/
		cursor->next = NULL; /*le next du node supprimé est NULL*/
		cursor->prev = NULL; /*le prev du node supprimé est NULL*/
		free(cursor); /*libérer le node supprimé*/
		return (1); /*retourner 1 pour indiquer le succès*/
	}

	while (cursor != NULL && i < index) /*parcourir la liste jusqu’à index*/
	{
		cursor = cursor->next; /*on avance sur la liste*/
		i++; /*on avance sur l'index*/
	}

	if (cursor == NULL) /*si on arrive en dehors de la liste*/
		return (-1); /* index trop grand */

	if (cursor->prev != NULL) /*si le node précédent n’est pas NULL*/
		/*le next du node précédent devient le node suivant*/
		cursor->prev->next = cursor->next;
	if (cursor->next != NULL) /*si le node suivant n’est pas NULL*/
		/*le prev du node suivant devient le node précédent*/
		cursor->next->prev = cursor->prev;

	cursor->next = NULL; /*le next du node supprimé est NULL*/
	cursor->prev = NULL; /*le prev du node supprimé est NULL*/
	free(cursor); /*libérer le node supprimé*/
	return (1); /*la fonction c'est bien passée on retourne 1*/
}
