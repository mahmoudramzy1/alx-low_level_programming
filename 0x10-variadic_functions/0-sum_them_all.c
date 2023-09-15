#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - add all parameter passed in argu
 * @n: count of argu
 * Return: the result of adding
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list p;

	va_start(p, n);
	/*int r = n;*/

	while (i != n)
	{
		sum += va_arg(p, int);
		i++;
	}
	va_end(p);
	return (sum);
}
