#include "main.h"
/**
 * _memset - fills memory with b for first n bytes
 * @s: pointer to string
 * @b: char will be fill the memory
 * @n: number of bytes
 * Return: pointer to bytes
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
