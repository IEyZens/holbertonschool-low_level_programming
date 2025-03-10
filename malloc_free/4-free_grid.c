#include "main.h"
/**
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	/* Vérifier que grid n'est pas NULL et que height est > 0 */
	if (grid == NULL || height <= 0)
		return;

	/* Libérer chaque ligne de la grille */
	for (i = 0; i < height; i++)
		/* Libérer chaque ligne */
		free(grid[i]);

	/* Libérer le tableau de pointeurs qui contient les lignes */
	/* Libérer le tableau principal des pointeurs */
	free(grid);
}
