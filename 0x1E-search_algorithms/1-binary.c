#include <stdio.h>
#include <stdlib.h>
/**
 * binary_search - search a binary array
 * @array: array to search
 * @size: size of the array
 * @value: value to search
 * Return: the index of the value
*/
int binary_search(int *array, size_t size, int value)
{
	size_t h = size - 1, l = 0, i;
	size_t mid;

	if (array == NULL || size == 0)
	{
		return -1
	}
	while (l <= h)
	{
		printf("Searching in array: ");
		for (i = l; i <= h; i++)
		{
			printf("%d", array[i]);
			if (i < h)
			{
				printf(", ");
			}
		}
		printf("\n");
		mid = l + (h - l) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			l = mid + 1;
		}
		else
		{
			h = mid - 1;
		}
	}
	return (-1);
}

