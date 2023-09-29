#include "main.h"
/**
 * get_endianness - check the system bytes order
 * Return: 0 if small endian ,1 if big
 */
int get_endianness(void)
{
	int x = 1, lor;

	lor = (int) (((char *)&x)[0]);
	return (lor);
}
