#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_times_table - function declaration
 * Description: print the time table
 * @n: the number to use
 * Return: void
 */

void print_times_table(int n);

/**
 * print_times_table - function definition
 * Description: print entire times table of specified number
 * @n: number to use
 * Return: void
 */


void print_times_table(int n)
{
	int row;
	int column;

	if (n >= 0 && n <= 20)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				int product = column * row;

				if (column == 0)
				{
					putchar('0');
				}
				else if (product <= 9)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar(' ');
					putchar('0' + product);
				}
				else if (product > 99)
				{
					putchar(',');
					putchar(' ');
					putchar('0' + (product / 100));
					putchar('0' + ((product / 10) % 10));
					putchar('0' + (product % 10));
				}
				else
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar('0' + (product / 10));
					putchar('0' + (product % 10));
				}
			}
			putchar('\n');
		}
	}
}
