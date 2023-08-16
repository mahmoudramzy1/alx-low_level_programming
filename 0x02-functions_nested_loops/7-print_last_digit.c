#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: takes num input
 * Return: last digit
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (n < 0)
		m = m * (-1);
	_putchar(m + '0');
	return (m);
}
