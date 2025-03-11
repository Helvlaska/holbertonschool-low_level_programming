#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Crée un tableau 2D d'entiers et l'initialise à 0.
 * @width: Largeur (colonnes).
 * @height: Hauteur (lignes).
 *
 * Return: Pointeur vers le tableau 2D, ou NULL si échec.
 */

int **alloc_grid(int width, int height)
{
	/*création du gros tableau*/
	int **ligne;
	/*variables pour boucler*/
	int i, j;

	/*vérifier si height et width <= 0*/
	if ((width <= 0) || (height <= 0))
		return (NULL);

	/*alloue la mémoire pour les lignes (gros tableau)*/
	ligne = malloc(sizeof(int *) * height);
	/*vérifie si malloc ok*/
	if (ligne == NULL)
		return (NULL);

	/*boucle pour allouer longueur des lignes (colonnes)*/
	for (i = 0; i < height; i++)
	{
		/*allocation mémoire des colonnes*/
		ligne[i] = malloc(sizeof(int) * width);
		/*vérifie si malloc ok*/
		if (ligne[i] == NULL)
		{
			/*libère tout le mémoire allouée en cas d'échec*/
			for (j = 0; j < i; j++)
				/*d'abord le contenu des colonnes*/
				free(ligne[j]);
			/*ensuite les lignes*/
			free(ligne);
			return (NULL);
		}

		/*initialise les valeurs du tableau a 0*/
		for (j = 0; j < width; j++)
			ligne[i][j] = 0;
	}
	return (ligne);
}
