#include "main.h"

/**
 * _strncat - function declaration
 * @dest: second string
 * @src: first string
 * @n: number of time to append
 * Return: character string
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncat - function definition
 * @dest: second string value
 * @src: first string value
 * @n: number of time
 * Description: concatenates number of times
 * Return: character string value
 */

char *_strncat(char *dest, char *src, int n)
{
	int src_index;
	int dest_index;

	for (dest_index = 0; dest[dest_index] != '\0'; dest_index++)
	{
	}

	for (src_index = 0; src_index < n && src[src_index] != '\0'; src_index++)
	{
		dest[dest_index + src_index] = src[src_index];
	}
	dest[dest_index + src_index] = '\0';

	return (dest);
}
