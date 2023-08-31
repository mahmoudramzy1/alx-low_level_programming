#include "main.h"
/**
 * factorial - prints the factorial of num
 * @n: the integer will get his fact
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
