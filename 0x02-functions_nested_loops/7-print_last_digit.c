#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function declaration
 * @number: function arguement of type int
 * Description: extract last digit
 * Return: void
 */

int print_last_digit(int number);

/**
 * print_last_digit - extracts the last digit
 * @number: integer to extract last digit
 * Description: extract last digit of number
 * Return: last_digit
 */

int print_last_digit(int number)
{
	int last_digit = number % 10;

	if (number < 0)
	{
		last_digit = number * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
