#include "main.h"
/**
 * print_line - print line of _ with number of n
 * Return: always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
