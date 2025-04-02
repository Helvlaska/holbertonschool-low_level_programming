#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_dnodeint - Add un new nœud au début d'une liste doublement chaînée.
 * @head: Double pointeur vers le début de la liste.
 * @n: Valeur entière à stocker dans le nouveau nœud.
 *
 * Description :
 * Cette fonction alloue de la mémoire pour un nouveau nœud, lui assigne
 * la valeur n, l'insère au début de la liste, met à jour les pointeurs
 * 'next' et 'prev' en conséquence, puis redéfinit le head pour qu'il
 * pointe sur le nouveau nœud.
 *
 * Return: L'adresse du nouveau nœud (succès)
 * ou NULL si l'allocation échoue.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*allocation de la mémoire pour le nouveau moeud*/
	dlistint_t *new_noeud = malloc(sizeof(dlistint_t));

	if (!new_noeud) /*on vérifie si l'allocation fail*/
		return (NULL); /*on quitte la fonction direct*/

	new_noeud->n = n; /*initialisation de la valeur*/
	new_noeud->prev = NULL; /*initialisation le ptr précédent à NULL*/
	new_noeud->next = NULL; /*initialisation le ptr suivant à NULL*/

	if (*head != NULL) /*si la liste n'est pas vide*/
	{
		new_noeud->next = *head; /*initialiser le ptr suivant sur ancien head*/
		(*head)->prev = new_noeud; /*initialiser le ptr préc sur le new noeud*/
	}

	*head = new_noeud; /*on dit que le head est le nouveau noeud*/
	return (new_noeud); /*on retourne le nouveau noeud prêt à l'emploi*/
}
