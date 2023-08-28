#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: pointer to put the constant
 * @b: constant
 * @n: number of bytes
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
