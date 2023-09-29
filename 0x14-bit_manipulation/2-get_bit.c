#include "main.h"
/**
 * get_bit - returns the index bit
 * @n: the number we want to check
 * @index: the index of bit we will check
 * Return: the value of the index bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	
	if (index >= sizeof(n) * 8)
		return (-1);
	if (n & 1l << index)
		i = 1;
	else
		i = 0;
	return (i);
}
