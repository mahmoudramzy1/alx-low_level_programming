#include "main.h"
/**
 *
 * print_square - prints square that you give his long
 * @size: is the size of square
 * Return: 0
 */
void print_square(int size)
{
        int i, j;

        for (i = 0; i < size; i++)
        {
                for (j = 0; j < size; j++)
                {
                        _putchar('#');
                }
                _putchar('\n');
        }
}
