#include "main.h"

/**
 * get_endianness - fxn that checks if a lil or big endian
 *
 * Return: 0 for big, 1 for lil'
 */

int get_endianness(void)
{
	unsigned int m = 1;
	char *n = (char *) &m;

	return (*n);
}
