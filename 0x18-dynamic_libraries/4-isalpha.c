#include "main.h"
/**
 * _isalpha - checks if c is letter
 * @c: the character to be checked
 * Return: 1 if c is character otherwise always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
