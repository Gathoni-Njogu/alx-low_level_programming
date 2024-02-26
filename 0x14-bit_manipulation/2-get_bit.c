#include "main.h"

/**
 * get_bit - fxn that returns bit value at a given index
 * @n: number to check bits in
 * @index: index at which to check bit
 *
 * Return: value of bit, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int checker;

	if (index > 63)
		return (-1);

	checker = (n >> index) & 1;

	return (checker);
}
