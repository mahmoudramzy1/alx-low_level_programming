#include "main.h"
/**
 * cap_string - capitalize first letter from all sentences.
 * @s: pointer to the char in string to be capitalized.
 * Return: pointer to the changed string.
 */
char *cap_string(char *s)
{
	int i = 0;
	int c;
	char delimiter[] = " \n\t;,.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 'z' && s[i] >= 'a')
		{
			for (c = 0; c < 12; c++)
			{
				if (s[i - 1] == delimiter[c])
				{
					s[i] -= 32;
				}
				else
					continue;
			}
		}
		else
			continue;
	}

	return (s);
}
