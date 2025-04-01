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
 * add_node - Ajoute un nouveau noeud au début d'une liste_t
 * @head: double pointeur vers la tête de la liste
 * @str: chaîne de caractères à dupliquer pour le nouveau noeud
 *
 * Cette fonction alloue dynamiquement un nouveau noeud de type list_t,
 * y copie la chaîne de caractères donnée (avec strdup),
 * initialise les champs `len` (longueur de la chaîne) et `next`,
 * puis place ce nouveau noeud en tête de la liste.
 *
 * En cas d’échec d’allocation mémoire, la fonction libère
 * les ressources allouées et retourne NULL.
 *
 * Return: l’adresse du nouveau noeud, ou NULL en cas d’échec
 */
list_t *add_node(list_t **head, const char *str)
{
	/*aloue la mémoire pour un nouveau noeud*/
	/*taille de la valeur + taille du ptr = list_t*/
	list_t *new_noeud = malloc(sizeof(list_t));

	if (new_noeud == NULL) /*on vérifie si l'allocation fail*/
	{
		exit(100); /*on quitte la fonction direct*/
	}
	new_noeud->str = strdup(str); /*on stock la donnée*/
	if (new_noeud->str == NULL) /*on test la valeur est null*/
	{
		free(new_noeud); /*alors on libère la mémoire*/
		return (NULL); /*et on retourne null*/
	}
	new_noeud->next = *head; /*on fait pointer le ptr sur head*/
	/*on utilise la fonction _strlen pour compter la length*/
	new_noeud->len = _strlen(str);
	*head = new_noeud; /*on dit que le head est le nouveau noeud*/

	/*on retourne l'adresse du nouveau noeud*/
	return (new_noeud);
}
