#include "main.h"
#include <stdio.h>

/**
 * print_array - function declaration
 * @a: array pointer
 * @n: number of elements to print
 * Return: void
 */

void print_array(int *a, int n);

/**
 * print_array - function definition
 * Description: prints specified array elements
 * @a: the array pointer
 * @n: the number of elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
