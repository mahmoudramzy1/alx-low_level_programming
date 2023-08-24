#include "main.h"
/**
 * leet - encode into 1337 speak
 * @s: pointer to char
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
	int i, j;
	char n1[] = "AaEeOoTtLl";
	char n2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == n1[j])
				str[i] = n2[j];
		}
	}
	return (str);
}
