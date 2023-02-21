#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function declaration
 * Description: print numbers to 98
 * @n: starting number
 * Return: void
 */

void print_to_98(int n);

/**
 * print_to_98 - function definition
 * Description: print all numbers to 98
 * @n: the start point
 * Return: void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
