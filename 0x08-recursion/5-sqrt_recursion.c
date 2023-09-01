#include "main.h"
/**
 * _sqrt_recursion - returns square root of the num
 * @n: parameter takes int
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - returns square root of n
 * @n: parameter takes integer
 * @val: paramter takes integer that check square root
 * Return: square root of n if positive
 */
int square(int n, int val)
{
	if (val*val == n)
		return (val);
	else if (val*val <  n)
		return (square(n, val+1));
	else
		return (-1);
}
