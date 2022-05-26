#include "main.h"

/**
 * binary_to_uint - Function converts binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	if (!b)
		return (0);

	for (num = 0; *b; b++)
	{
		if (*b == '1')
			num = (num << 1) | 1;
		else if (*b == '0')
			num <<= 1;
		else
			return (0);
	}
	return (num);
}
