#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Calcule la somme de toutes les valeurs
 * dans une liste doublement chaînée.
 * @head: Pointeur vers le début de la liste.
 *
 * Description :
 * Cette fonction parcourt la liste et additionne les valeurs
 * contenues dans le champ 'n' de chaque nœud.
 *
 * Return: La somme totale des valeurs, ou 0 si la liste est vide.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0; /*variable qui va stocker la somme*/

	while (head != NULL) /*on parcour la liste de noeuds*/
	{
		sum += head->n; /*on ajoute la valeur à sum*/
		head = head->next; /*on avance dans la liste*/
	}
	return (sum);
}
