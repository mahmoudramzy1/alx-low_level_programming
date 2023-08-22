#include "main.h"
/**
 * rev_string - reverse string
 * @s: parameter takes string
 * Return: 0
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	for (i = 0; s[i] != '\0'; ++i)
		;

	while (j < i / 2)
	{
		temp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temp;
		j++;
	}

}
