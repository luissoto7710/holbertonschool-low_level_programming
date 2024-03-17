#include <stdlib.h>
#include "main.h"
/**
 * free_grid - desc
 * @grid: grid
 * @height: height
 * Return: return
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
