#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function declaration
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer / NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * _calloc - function definition
 * @nmemb: the number of elements
 * @size: the size of the bytes
 * Description: allocates memory for an array of nmemb
 * elements of size bytes
 * Return: a pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < nmemb * size; index++)
	{
		pointer[index] = 0;
	}

	return (pointer);
}
