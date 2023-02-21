#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints integer sign
 * @n: integer to test
 * Description: function declaration
 * Return: void
 */

int print_sign(int n);

/**
 * print_sign - prints the integer sign
 * @n: this integer will be tested
 * Description: +,- & 0 for positive, negative & zero
 * Return: void
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
