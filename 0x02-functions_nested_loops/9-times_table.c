#include "main.h"

/**
 * times_table - prints 9 time table
 */
void times_table(void)

{
	int m, n, o;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			o = m * n;
			if (o <= 9)
			{
				if (n > 0)
					_putchar(' ');
				_putchar(o + '0');
			}
			else
			{
				_putchar((o / 10) + '0');
				_putchar((o % 10) + '0');
			}
			if (n < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
