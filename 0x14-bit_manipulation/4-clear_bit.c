#include "main.h"

/**
 * clear_bit - sets bit value to 0 for specified index
 * @n: unsigned long int pointer
 * @index: bit index
 * Return: 1 for success, -1 for failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int byte;

	if (index > 63)
	{
		return (-1);
	}

	byte = 1 << index;

	if (*n & byte)
	{
		*n ^= byte;
	}

	return (1);
}
