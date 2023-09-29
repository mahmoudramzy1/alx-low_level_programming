#include "main.h"
/**
 * print_binary - prints numbers in base 2
 * @n: the number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int mask;
	int i;
	 int msb_position = sizeof(n) * 8 - 1;
    while (((n >> msb_position) & 1) == 0)
        msb_position--;

    for (i = msb_position; i >= 0; i--)
    {
        mask = 1u << i;

        if ((n & mask) != 0)
            printf("1");
        else
            printf("0");
    }
}
