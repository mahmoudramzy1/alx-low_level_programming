#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonals of a square matrix of integers
 * @a: the array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		s2 += a[size - 1 - i];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
