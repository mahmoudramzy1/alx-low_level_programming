#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

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
<<<<<<< HEAD
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
=======
            printf("Value checked array[%zu] = [%d]\n", i, array[i]);
            return i;
        }
        else if (i == size - 1)
        {
            printf("Value checked array[%zu] = [%d]\n", i, array[i]);
            return -1;
        }
        else
        {
            printf("Value checked array[%zu] = [%d]\n", i, array[i]);
>>>>>>> 50eeefec4c821622ab93731a997a537400b90f1b
        }
    }
    return -1;
}
