#include "main.h"

/**
 * swap_int - swaps integer values
 *
 * @a: first integer
 * @b: second integer
 * Return: void
 */

void swap_int(int *a, int *b);

/**
 * swap_int - swaps integer arguement values
 *
 * @a: 1st integer
 * @b: 2nd integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int placeholder1 = *a;
	int placeholder2 = *b;
	*a = placeholder2;
	*b = placeholder1;
}
