#include "main.h"
/**
 * clear_bit - sets index bit to 0
 * @n: given number
 * @index: the index of bit to set
 * Return: 1 if work ,0 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1 << index)
	*n = *n ^ (1 << index);
	return (1);
}
