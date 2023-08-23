#include "main.h"
/**
 * _strncpy - copies string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: poiter to result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, m;

	m = 0;
	for (i = 0; i < n; i++)
	{
		dest[m] = src[i];
		m++;
	}
	return (dest);
}
