#include "main.h"
/**
 * _puts_recursion - prints characters recursively with puts
 * @s: pointer to character
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
