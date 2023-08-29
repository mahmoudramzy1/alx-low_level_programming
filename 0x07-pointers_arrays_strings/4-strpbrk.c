#include "main.h"
/**
 * _strpbrk - searches for a string in any bytes
 * @s: pointer to string
 * @accept: pointer to string want to search for it
 * Return: pointer to string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0';j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (0);
}
