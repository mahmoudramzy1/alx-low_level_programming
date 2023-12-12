#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: area in memory will be change
 * @src: string changes memory area
 * @n: number of bytes will be change
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
