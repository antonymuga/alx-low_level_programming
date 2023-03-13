#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - function declaration
 * @s1: string one
 * @s2: string two
 * Return: a string
 */

char *str_concat(char *s1, char *s2);

/**
 * str_concat - function definition
 * @s1: the first string
 * @s2: the second string
 * Description: concatenate string 1 and 2
 * Return: a string value
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len_s1 = strlen(s1);
	size_t len_s2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	result = (char *) malloc(len_s1 + len_s2 + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}

