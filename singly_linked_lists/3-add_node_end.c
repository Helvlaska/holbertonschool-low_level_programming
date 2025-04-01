#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: it's a caracters chain
 *
 * Return: the length of a string
 */
int _strlen(const char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * add_node_end - Ajoute un nouveau noeud à la fin d'une liste_t
 * @head: double pointeur vers la tête de la liste
 * @str: chaîne de caractères à dupliquer pour le nouveau noeud
 *
 * Cette fonction alloue dynamiquement un nouveau noeud de type list_t,
 * y copie la chaîne de caractères donnée (avec strdup),
 * initialise les champs `len` (longueur de la chaîne) et `next`,
 * puis place ce nouveau noeud en fin de la liste.
 *
 * En cas d’échec d’allocation mémoire, la fonction libère
 * les ressources allouées et retourne NULL.
 *
 * Return: l’adresse du nouveau noeud, ou NULL en cas d’échec
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/*pointeur pour parcourir la liste de noeud (cursor)*/
	list_t *cursor, *new_noeud; /*nouveau noeud (new_noeud)*/

	/*aloue la mémoire pour un nouveau noeud*/
	/*taille de la valeur + taille du ptr = list_t*/
	new_noeud = malloc(sizeof(list_t));
	if (new_noeud == NULL) /*on vérifie si l'allocation fail*/
		exit(100); /*on quitte la fonction direct*/

	new_noeud->str = strdup(str); /*on stock la donnée*/
	if (new_noeud->str == NULL) /*on test si la valeur est null*/
	{
		free(new_noeud); /*alors on libère la mémoire*/
		return (NULL); /*et on retourne null*/
	}

	new_noeud->len = _strlen(str); /*_strlen compte la length*/
	new_noeud->next = NULL; /*on initialise le ptr pr le noeud suivant à null*/

	if (*head == NULL) /*on vérifie si la liste est vide*/
	{
		*head = new_noeud; /*alors head est le 1e et dernier*/
		return (new_noeud); /*on retourne l'adresse du nouveau noeud*/
	}

	cursor = *head; /*on place le cursor au début de la liste*/
	while (cursor->next != NULL) /*aller jusqu'au dernier noeud*/
	{
		cursor = cursor->next; /*on avance dans la liste*/
	}

	cursor->next = new_noeud; /*on dit que le head est le nouveau noeud*/

	/*on retourne l'adresse du nouveau noeud*/
	return (new_noeud);
}
