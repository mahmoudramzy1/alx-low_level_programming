#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
    {
        return (-1);
    }

    for (size_t i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
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
        }
    }
}
