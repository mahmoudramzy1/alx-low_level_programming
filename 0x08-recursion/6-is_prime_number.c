#include "main.h"
/**
 * is_prime_number - returns 1 if n is prime num
 * @n: parameter takes int
 * Return: 1 if n is prime num
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 * prime - returns 1 if prime
 * @n: the num
 * @div: the checker
 * Return: 1 if prime otherwise 0
 */
int prime(int n, int div)
{
	if (n % div == 0 && n > 1)
		return (0);
	else if (n <= 1)
		return (0);
	else if (n / div < div)
		return (1);
	else
		return (prime(n, div + 1));
}
