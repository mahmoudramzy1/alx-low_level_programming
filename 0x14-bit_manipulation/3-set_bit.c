#include "main.h"
/**
 * set_bit - sets the value of bit in index to 1
 * @n: the given number
 * @index: the index of the bit we will change
 * Return: 1 if work , -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(n) * 8)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
