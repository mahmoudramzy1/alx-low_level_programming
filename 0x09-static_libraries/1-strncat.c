#include "main.h"
/**
 * _strncat - concatenates two string
 * @dest: pointer thatt point to destination string
 * @src: pointer that points to source string
 * @n: number of bytes would be concatenated from src
 * Return: poniter that pointes to result
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (dest[x])
		x++;
	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[x++] = src[y];
	dest[x++] = '\0';
	return (dest);
}
