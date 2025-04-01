#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * free_list - Libère la mémoire allouée pour une liste_t
 * @head: pointeur vers le début de la liste
 *
 * Cette fonction parcourt une liste chaînée de type list_t
 * et libère la mémoire allouée pour chaque noeud, ainsi que
 * pour la chaîne de caractères `str` contenue dans chaque noeud.
 * Une fois terminée, toute la mémoire utilisée par la liste est libérée.
 */
void free_list(list_t *head)
{
	list_t *cursor = head; /*ptr pour parcourir la liste*/
	list_t *noeud_free; /*le noeud à libérer*/

	while (cursor != NULL) /*boucle pour parcourir la liste*/
	{
		/*on se positionne sur cursor pour libérer son noeud*/
		noeud_free = cursor;
		cursor = cursor->next; /*on avance avant de libérer*/
		free(noeud_free->str); /*on libère le noeud de sa valeur*/
		free(noeud_free); /*on libère le noeud*/
	}
}
