#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: first dimension
 * @height: second dimension
 * Return: pointer to pointer
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **square;

	if (width == 0 || height == 0)
		return (NULL);
	tab = malloc(sizeof(int *) * height);
	if (square == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		square[x] = malloc(sizeof(int) * width);
		if (square[x] == 0)
		{
			for (; x <= 0; x--)
				free(square[x]);
			free(square);
			return (NULL);

		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			square[x][y] = 0;
	}
	return (square);
}
