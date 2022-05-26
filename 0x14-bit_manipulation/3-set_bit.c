#include "main.h"

/**
 * set_bit - Function sets the value of a bit to 1 at given index
 * @n: the num in array
 * @index: from 0 to desired bit
 *
 * Return: 1 if success or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
		return (-1);
	*n |= (1 << index);
	return (1);
}
