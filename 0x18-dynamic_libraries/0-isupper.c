#include "main.h"
/**
 * _isupper - check if c is upper
 * @c: take a alphabet
 * Return: 1 if c is upper if not return 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
