#include "main.h"

/**
 * get_bit - return value of specified bit
 * @n: unsigned long int input.
 * @index: index of the bit.
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int counter;

	if (n == 0 && index < 64)
	{
		return (0);
	}

	for (counter = 0; counter <= 63; n >>= 1, counter++)
	{
		if (index == counter)
		{
			return (n & 1);
		}
	}

	return (-1);
}
