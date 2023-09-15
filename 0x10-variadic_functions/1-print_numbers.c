#include "variadic_functions.h"
/**
 * print_numbers - printes num follow by new line
 * @separator: separator between numbers
 * @n: count of pnumbers
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list p;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(p, n);
	if (separator != NULL)
	{
		while (i != n - 1)
		{
			printf("%d%s", va_arg(p, int), separator);
			i++;
		}
		if (i == n - 1)
			printf("%d\n", va_arg(p, int));
	}
	va_end(p);
}
