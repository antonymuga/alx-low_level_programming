#include <stdio.h>
#include "main.h"

/**
 * _abs - function declaration
 * @n: integer to test
 * Description: convert number to absolute
 * Return: void
 */

int _abs(int n);

/**
 * _abs - function definition
 * @n: integer that will be tested
 * Description: convert and print number absolute
 * Return: void
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n);
	}
}
