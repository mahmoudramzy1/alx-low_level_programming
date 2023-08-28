#include "main.h"
/**
 * _strchr - locates character in a string
 * @s: pointer to string
 * @c: character
 * Return: pointer to s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		else if (s[i] == '\0')
		{
			return ('\0');
		}
		else
		{
			i++;
		}
	}
	return (0);
}
