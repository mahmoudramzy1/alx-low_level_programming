#include "main.h"
/**
 * _islower - checks if c is lowercase
 * @c: check inputs of function
 * Return: returns 1 if c is lowercase otherwise always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
