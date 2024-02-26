#include "main.h"

/**
 * clear_bit - Fxn that sets bit value to 0 at given index
 * @n: bit to be set
 * @index: index of bit to be set
 *
 * Return: 1 if successful, or 0 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
