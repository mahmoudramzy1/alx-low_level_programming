#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates array from min to max
 * @min: first element of array
 * @max: last element of array
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *m;
	int i = 0;
	int j;

	if (min > max)
		return (0);
	for (i = min; i <= max; i++)
		;
	m = malloc(i * sizeof(int));
	if (m == NULL)
		return (0);
	for (j = 0; j <= i; j++)
		m[j] = min++;
	return (m);
}
