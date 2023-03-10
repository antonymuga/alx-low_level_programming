#include "main.h"

/**
 * *_strchr - function declaration
 * @s: the string
 * @c: the character
 * Return: a character
 */
char *_strchr(char *s, char c);

/**
 * *_strchr - function definition
 * @s: the string to be searched
 * @c: the character to find
 * Description: finds a character in a string
 * Return: a character value
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	if (s[index] == c)
	{
		return (s + index);
	}
	return (0);
}
