#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: pointer to first sttring
 * @s2: pointter to second string
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int i, n, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	p = malloc((j + i + 1) * sizeof(char));
	if (p == NULL)
		return (0);
	for (n = 0; s1[n] != '\0'; n++)
		p[n] = s1[n];
	for (n = i; s2[n - i] != '\0'; n++)
		p[n] = s2[n - i];
	return (p);

}
