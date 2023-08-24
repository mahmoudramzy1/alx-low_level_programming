#include "main.h"
/**
 * _strcmp - compares two stringss
 * @s1: pointer to the first string
 * @s2: pointer two the second string
 * Return: 1 if two stringes are the same
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
			break;
		}
	}
	return (0);

}
