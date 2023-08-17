#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14 ten times
 * Return: always 0
 */
void more_numbers(void)
{
	int i, j, num;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{	num = j;
			if (j > 9)
			{
				num = j % 10;
				_putchar(1 + '0');
			}
			_putchar(num + '0');

		}
		_putchar('\n');
	}
}
