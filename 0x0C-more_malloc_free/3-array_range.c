#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function declaration
 * @min: min of array range
 * @max: max of array range
 * Return: pointer or null
 */

int *array_range(int min, int max);

/**
 * array_range - function definition
 * @min: the minumum
 * @max: th emaximum
 * Description: array to contain all values from min
 * include to max and ordered from min to max
 * Return: pointer to array or null
 */

int *array_range(int min, int max)
{
	int index;
	int *pointer;
	int len;

	if (min > max)
	{
		return (NULL);
	}

	len = 0;
	for (index = min; index <= max; index++)
	{
		len++;
	}

	pointer = malloc(sizeof(int) * len);
	if (pointer == NULL)
	{
		return (NULL);
	}

	index = 0;
	while (min <= max)
	{
		pointer[index] = min;
		index++;
		min++;
	}
	return (pointer);
}
