#include "main.h"

/**
 * _isdigit - check if c is digit
 * @c: takes the input to be checked
 * Return: 1 if c is digit otherwise is 0
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}
