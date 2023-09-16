#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - excutes another fun
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to fun
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && size && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
