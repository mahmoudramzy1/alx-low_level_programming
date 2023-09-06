#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - points to block of memory that allocates copy of str
 * @str: pointer to original string
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;
	m = malloc((sizeof(char) * size) + 1);
	if (m == 0)
		return (NULL);
	for (; str[i] != '\0'; i++)
		m[i] = str[i];
	return (m);

}
