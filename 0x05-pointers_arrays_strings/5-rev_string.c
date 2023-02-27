#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - function declaration
 * @s: string pointer
 * Return: void
 */

void rev_string(char *s);

/**
 * rev_string - function definition
 * Description: reverses a string
 * @s: the string pointer
 * Return: void
 */

void rev_string(char *s)
{
	int index;
	char temporary;

	for (index = 0; index < _strlen(s) / 2; index++)
	{
		temporary = s[index];
		s[index] = s[_strlen(s) - (index + 1)];
		s[_strlen(s) - (index + 1)] = temporary;
	}
}
