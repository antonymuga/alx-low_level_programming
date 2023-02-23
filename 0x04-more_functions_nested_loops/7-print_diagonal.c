#include "main.h"

/**
 * print_diagonal - function declaration
 * Description: print a diagonal line
 * @n: number of parts
 * Return: void
 */

void print_diagonal(int n);

/**
 * print_diagonal - function definition
 * Description: print a slash n times
 * @n: number of slashes
 * Return: void
 */

void print_diagonal(int n)
{
	int slash;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (slash = 0; slash < n; slash++)
		{
			for (space = 0; space < slash; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
