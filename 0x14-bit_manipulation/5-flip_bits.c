#include "main.h"
/**
 * flip_bits - returns number of bit we will flip to get m from n
 * @n: first given number
 * @m: second hiven number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int r = 0;
	unsigned long int p = n ^ m;

	while (p)
	{
		if (p & 1)
			r++;
		p = p >> 1;

	}
	return (r);
}
