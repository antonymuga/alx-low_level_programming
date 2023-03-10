#include "main.h"

/**
 * _strncpy - function declaration
 * @dest: second string
 * @src: first string
 * @n: number of times to copy
 * Return: a string
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strncpy - function definition
 * @dest: the second string
 * @src: the first string
 * @n: number of times to copy string
 * Description: copies a string
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	for (; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
