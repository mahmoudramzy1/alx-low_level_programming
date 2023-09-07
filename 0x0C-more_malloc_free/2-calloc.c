#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for array
 * @nmemb: number of unit of bytes
 * @size: unit of bytes
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, l = 0;
	char *m;

	if (nmemb == 0 || size == 0)
		return (0);
	i = nmemb * size;
	m = malloc(i);
	if (m == NULL)
		return(0);
	/*for (i = 0; i < nmemb * sizeof(int); i++)
		m[i] = 0;*/
	while (i < l)
	{
		m[i] = 0;
		i++;
	}
	return(m);

}
