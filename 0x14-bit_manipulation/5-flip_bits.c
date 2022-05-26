#include "main.h"

/**
 * flip_bits - Function returns number of bits needed to flip
 * one number to another
 * @n: First input
 * @m: Second input
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	int bits = 0;

	while (i)
	{
		bits += i & 1;
		i >>= 1;
	}
	return (bits);
}
