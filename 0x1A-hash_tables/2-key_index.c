#include "hash_tables.h"
unsigned long int key_index(const unsigned char *key, unsigned long int size)
	unsigned long int i;

	i = hash_ djb2(key) % value;
	return i;
