#include <stdio.h>
#include "main.h"

/**
 * times_table - function declaration
 * Description: print  9 times table
 * Return: void
 */

void times_table(void);

/**
 * times_table - function definition
 * Description: print entire 9 times table
 * Return: has no return value
 */

void times_table(void)
{
	int row;
	int column;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			int product = column * row;
			int tens_position = product / 10;
			int ones_position = product % 10;

			if (column == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens_position + '0');
				_putchar((ones_position % 10) + '0');
			}

		}
		_putchar('\n');
	}
}
