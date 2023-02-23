#include "main.h"

/**
 * print_numbers - function declaration
 * Description: print 0 - 9
 * Return: void
 */

void print_numbers(void);

/**
 * print_numbers - function definition
 * Description: will print 0 - 9
 * Return: void
 */

void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		_putchar(number + '0');
	}
	_putchar('\n');
}
