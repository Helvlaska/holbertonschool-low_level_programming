#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Libère un tableau 2D d'entiers alloué dynamiquement.
 * @grid: Le tableau 2D à libérer.
 * @height: Nombre de lignes du tableau.
 */

void free_grid(int **grid, int height)
{
	/*variable de boucle*/
	int i;

	for (i = 0; i < height; i++)
	{
		/*d'abord le contenu des colonnes*/
		free(grid[i]);
	}
	/*ensuite les lignes*/
	free(grid);
}
