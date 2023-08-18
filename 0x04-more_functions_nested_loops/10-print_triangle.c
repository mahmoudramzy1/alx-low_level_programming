#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size of the triangle
 * Return: always 0
 */
void print_triangle(int size)
{
	int num;
	int a;
	int hashes;

	if (size <= 0)
		_putchar('\n');
	else
	{
	for (num = 1; num <= size; num++)
	{
		for (a = size - num; a > 0; a--)
		{
			_putchar(' ');
		}
		for (hashes = 1; hashes <= num; hashes++)
			_putchar('#');
		_putchar('\n');
	}
	}
}
