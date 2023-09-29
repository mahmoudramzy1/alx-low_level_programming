#include "main.h"
/**
 * binary_to_uint - convert binary num to unsigned int
 * @b: pointer to binary num
 * Return: unsinged int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, i = 0;
	int length = 0, j;

	if (b == NULL)
		return (0);
	while (b[length] != '\0')
		length++;
	j = length - 1;
	while (j >= 0)
	{
		if (b[j] != '1' && b[j] != '0')
			return (0);
		if (b[j] == '1')
			i = i + base;
		j--;
		base = base * 2;
	}
	return (i);
}
