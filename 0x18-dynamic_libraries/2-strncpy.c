#include "main.h"
/**
 * _strncpy - copies string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes would copy
 * Return: poiter to result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
