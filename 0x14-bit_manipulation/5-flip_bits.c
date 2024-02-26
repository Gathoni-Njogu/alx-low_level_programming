#include "main.h"

/**
 * flip_bits - fxn that counts number of bits you need to flip
 * @n: first number
 * @m: second number
 *
 * Return: Count of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, bit_count = 0;
	unsigned long int cur;
	unsigned long int excl = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		cur = excl >> a;
		if (cur & 1)
			bit_count++;
	}
	return (bit_count);
}
