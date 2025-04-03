#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

void free_dlistint(dlistint_t *head)
{
    dlistint_t *cursor = head; /*ptr pour parcourir la liste*/
	dlistint_t *noeud_free; /*le noeud à libérer*/

	while (cursor != NULL) /*boucle pour parcourir la liste*/
	{
		/*on se positionne sur cursor pour libérer son noeud*/
		noeud_free = cursor;
		cursor = cursor->next; /*on avance avant de libérer*/
		free(noeud_free); /*on libère le noeud*/
        head = NULL;
	}
}
