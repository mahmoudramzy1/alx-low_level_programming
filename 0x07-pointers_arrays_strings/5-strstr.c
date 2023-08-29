#include "main.h"
/**
 * _strstr - find first occurance of subsring in string
 * @haystack: pointer to string
 * @needle: pointer to substring
 * Return: pointer to the first occurance of substring in the string
 */
char *_strstr(char *haystack, char *needle)
{
	int j;
	/*char *p;*/

	while (*haystack)
	{
		for (j = 0; needle[j];)
		{
			if (haystack[j] == needle[j])
			{
				j++;
				if (needle[j + 1] == '\0')
				{
					return (haystack);
				}
			}
			else if (haystack[j] != needle[j])
			{
				haystack++;
			}

		}
	}
	return (0);
}
