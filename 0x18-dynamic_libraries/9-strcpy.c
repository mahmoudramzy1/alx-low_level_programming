#include "main.h"
/**
 * _strcpy - copy string from src to dest with \0
 * @dest: the detination that the string will copy in it
 * @src: the source that the string will copy from it
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
