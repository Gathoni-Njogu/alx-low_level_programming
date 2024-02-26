#include "main.h"

/**
 * set_bit - fxn that sets given index' bit to 1
 * @n: pointer to the number to be converted
 * @index: index of bit to be set to 1
 *
 * Return: 1 or -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_bit;

	if (index > 63)
		return (-1);

	set_bit = 1 << index;
	*n = *n | set_bit;
	return (1);
}
