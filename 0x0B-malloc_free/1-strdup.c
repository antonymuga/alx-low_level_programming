#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function declaration
 * @str: string pointer
 * Return: string
 */

char *_strdup(char *str);

/**
 * _strdup - function definition
 * @str: a string pointer
 * Description: duplicates a string
 * Return: a string value
 */

char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	new_str = malloc(strlen(str) + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}
