#include "main.h"
/**
 * reverse_array - reverses the array
 * @a: array
 * @n: number of elements of array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;

	while (i < --n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
