#include "main.h"

/**
 * print_most_number - function declaration
 * Description: print 0 - 9, except 2 & 4
 * Return: void
 */

void print_most_numbers(void);

/**
 * print_most_numbers - function definition
 * Description: print 0 - 9, without 2 & 4
 * Return: void
 */

void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number == 2 || number == 4)
		{
			continue;
		}
		else
		{
			_putchar(number + '0');
		}
	}
	_putchar('\n');
}
