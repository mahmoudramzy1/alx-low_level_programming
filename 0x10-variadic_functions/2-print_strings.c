#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: count of sttrings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i = 0;
	va_list p;

	va_start(p, n);
	if (separator != NULL)
	{
		while (i != n)
		{
			s = va_arg(p, char*);
			if (s != NULL)
			{
				printf("%s", s);
				if (i != n - 1)
				{
					printf("%s", separator);
				}

			}
			else
				printf("(nil)");
			i++;
		}
		printf("\n");
	}
	va_end(p);

}
