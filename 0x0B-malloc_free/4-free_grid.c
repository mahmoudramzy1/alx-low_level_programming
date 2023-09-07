#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees grid
 * @height: int
 * @grid: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
