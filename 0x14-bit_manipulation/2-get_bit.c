#include "main.h"

/**
 * get_bit - Function returns the value
 * of a bit at a given index
 * @n: bit value
 * @index: index from 0 to desired bit
 *
 * Return: value of bit or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return (n >> index & 1);
}
