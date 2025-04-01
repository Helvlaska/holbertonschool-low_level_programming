#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * test_null - Vérifie si un pointeur est NULL
 * @ptr: pointeur à tester
 *
 * Cette fonction vérifie si le pointeur passé en argument est NULL.
 * Si c’est le cas, elle affiche "[0] (nil)" et retourne 1.
 * Sinon, elle retourne 0 sans rien afficher.
 *
 * Return: 1 si ptr est NULL, 0 sinon
 */
int test_null(const void *ptr)
{
	if (ptr == NULL)
	{
		printf("[0] (nil)\n");
		return (1);
	}
	return (0);
}

/**
 * print_list - Affiche tous les éléments d'une liste chaînée
 * @h: pointeur vers le premier élément de la liste (tête)
 *
 * Cette fonction parcourt une liste chaînée de type list_t.
 * Pour chaque noeud, elle affiche :
 * - La longueur de la chaîne (len)
 * - Le contenu de la chaîne (str), ou "(nil)" si str est NULL
 * Si la liste elle-même est NULL,
 * un message est affiché et rien n'est parcouru.
 *
 * Return: le nombre total de noeuds dans la liste
 */
size_t print_list(const list_t *h)
{
	int count = 0; /*compteur de length*/

	const list_t *noeud = h; /*pointeur pour parcourir les noeuds*/

	test_null(h); /*on vérifie que h est vide*/

	while (noeud != NULL) /*on parcour la liste de noeuds*/
	{
		test_null(noeud); /*on vérifie si le noeud est vide*/
		count++; /*on incrémente count*/
		/*on print le noeud en cours*/
		printf("[%d] %s\n", noeud->len, noeud->str);
		noeud = noeud->next; /*on passe au noeud suivant*/
	}

	return (count); /*on retourne le compteur (length)*/
}
