#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concentrate two strings
 * @s1: parameter takes first string
 * @s2: parameter takes second string
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1len, s2len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*getting string length*/
	for (s1len = 0; s1[s1len] != '\0'; s1len++)
		;
	for (s2len = 0; s2[s2len] != '\0'; s2len++)
		;

	str = malloc(s1len + n + 1);
	if (str == NULL)
		return (0);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{	
		str[i] = s2[j];
		i++;
	}
	
	str[i + j + 1] = '\0';
	return (str);
}
