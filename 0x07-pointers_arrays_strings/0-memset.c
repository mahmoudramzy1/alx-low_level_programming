#include "main.h"
/**
 * _memset - fill first n byes in memory with char b
 * @s: pointer to the memory area that will be change
 * @b: char that will fill n bytes in memory
 * @n: number of bytes
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
