#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	unsigned int byte;
	char *c;

	byte = 1;
	c = (char *) &byte;

	return ((int)*c);
}
