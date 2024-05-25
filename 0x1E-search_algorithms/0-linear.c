#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
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
            printf("Value checked array[%d] = [%d]\n", i, array[i]);
            return i;
        }
        else if (i == size - 1)
        {
            printf("Value checked array[%d] = [%d]\n", i, array[i]);
            return -1;
        }
        else
        {
            printf("Value checked array[%d] = [%d]\n", i, array[i]);
        }
    }
}
