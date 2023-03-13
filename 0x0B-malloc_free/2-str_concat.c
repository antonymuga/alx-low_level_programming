#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function declaration
 * @s1: string 1
 * @s2: string 2
 * Return: returns concated string
 */

char *str_concat(char *s1, char *s2);

/**
 * str_concat - function definition
 * @s1: the first string
 * @s2: the second string
 * Description: concatenates string 1 and 2
 * Return: the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int index, len1, len2;
	char *conc;

	index = 0;
	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	while (s1[index] != '\0')
	{
		index++;
		len1++;
	}

	index = 0;

	while (s2[index] != '\0')
	{
		index++;
		len2++;
	}

	conc = malloc(sizeof(char) * (len1 + len2 + 1));
	if (conc == NULL)
		return (NULL);

	for (index = 0; index < len1; index++)
		conc[index] = s1[index];
	for (index = 0; index < len2; index++)
		conc[index + len1] = s2[index];
	conc[index + len1] = '\0';
	return (conc);
}
