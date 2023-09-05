#include "main.h"
/**
 * _abs - compute the absolute value for the integer
 * @n: the number o be computed
 * Return: always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}
