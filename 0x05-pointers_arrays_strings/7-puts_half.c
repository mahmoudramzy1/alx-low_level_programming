#include "main.h"
/**
 * puts_half - pints second half of string
 * @str: parameter takes string
 * Return: 0
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	i /= 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
