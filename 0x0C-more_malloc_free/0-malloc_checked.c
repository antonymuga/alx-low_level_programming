#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function declaration
 * @b: integer to check
 * Return: a pointer /  void
 */

void *malloc_checked(unsigned int b);

/**
 * malloc_checked - function definition
 * @b: the integer to check
 * Description: returns pointer to allocated  memory
 * if it fails, exit code 98
 * Return: a pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{

	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}

	return (pointer);
}
