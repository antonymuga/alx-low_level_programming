#include "main.h"

/**
 * binary_to_uint - convert binary number to unint
 * @b: pointer to character array
 * Description: convert a bin to unint
 * Return: binary num
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		num = num << 1;
		num += (*b - '0');
	}

	return (num);
}

