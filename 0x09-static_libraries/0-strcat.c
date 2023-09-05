#include "main.h"
/**
 * _strcat - concatenaates src to dest
 * @src: first parameter take string
 * @dest: second parameter takes string
 * Return: pointer to result string
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (dest[x])
		x++;
	for (y = 0; src[y]; y++)
		dest[x++] = src[y];
	return (dest);
}
