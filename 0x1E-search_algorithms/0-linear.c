#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - searching in array
 * @array: the array
 * @value: the element to search
 * @size: the size of array
 * Return: the index of the element
 */
int linear_search(int *array, size_t size, int value)
{
   
    size_t i;
    if (array == NULL || size == 0)
    {
        return (-1);
    }
    for (i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		return i;
        }
        else if (i == size - 1)
        {
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		return -1;
        }
        else
        {
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
        }
    }
    return -1;
}
