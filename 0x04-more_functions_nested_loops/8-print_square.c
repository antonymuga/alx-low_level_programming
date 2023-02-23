#include "main.h"

/**
 * print_square - function declaration
 * Description: prints a square  of hash symbols
 * @size: the size of the square
 * Return: void
 */

void print_square(int size);

/**
 * print_square - function definition
 * Description: print a square of hash
 * @size: the square size
 * Return: void
 */

void print_square(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

