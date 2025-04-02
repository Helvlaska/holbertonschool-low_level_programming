#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_dnodeint_end - Ajoute un nouveau nœud à la fin
 * d'une liste doublement chaînée.
 * @head: Double pointeur vers le début de la liste.
 * @n: Valeur entière à stocker dans le nouveau nœud.
 *
 * Description :
 * Cette fonction alloue de la mémoire pour un nouveau nœud, lui assigne
 * la valeur n, l’insère à la fin de la liste, met à jour les pointeurs
 * 'prev' et 'next' en conséquence. Si la liste est vide, le nouveau
 * nœud devient le head.
 *
 * Return: L’adresse du nouveau nœud (succès)
 * ou NULL si l’allocation échoue.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/*pointeur pour parcourir la liste de noeud (cursor)*/
	dlistint_t *cursor, *new_noeud; /*nouveau noeud (new_noeud)*/

	/*allocation de la mémoire pour le nouveau moeud*/
	new_noeud = malloc(sizeof(dlistint_t));

	if (!new_noeud) /*on vérifie si l'allocation fail*/
		return (NULL); /*on retourne null*/

	new_noeud->n = n; /*initialisation de la valeur*/
	new_noeud->prev = NULL; /*initialisation le ptr précédent à NULL*/
	new_noeud->next = NULL; /*initialisation le ptr suivant à NULL*/

	if (*head != NULL)
	{
		cursor = *head; /*on place le cursor au début de la liste*/
		while (cursor->next != NULL) /*aller jusqu'au dernier noeud*/
			cursor = cursor->next; /*on avance dans la liste*/
		cursor->next = new_noeud; /*le noeud précé prend new_noeud comme next*/
		new_noeud->prev = cursor; /*new_noeud prend le noeud précé comme prev*/
	}
	else
		*head = new_noeud; /*liste vide = new_noeud devient le head*/

	return (new_noeud); /*on retourne le nouveau noeud*/
}
