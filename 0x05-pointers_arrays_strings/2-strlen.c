#include "main.h"
/**
 * _strlen - returns the length of string that point to
 * @s: pointer point to string
 * Return: string length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}
