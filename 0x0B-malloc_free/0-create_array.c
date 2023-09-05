#include "main.h"
#include <stdlib.h>
/**
 * create_array - allocates block of memory for array
 * @size: size of the array
 * @c: char to intialize
 * Return: pointer to the array intialized or null
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
