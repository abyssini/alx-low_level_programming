#include "main.h"

/**
 * clear_bit - Function sets value of bit at index to 0 at a given index
 * @n: input
 * @index: from 0 to desired index
 *
 * Return: 1  if success or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
		return (-1);
	if (*n & 1UL << index)
		*n ^= 1UL << index;
	return (1);
}
