#include "main.h"

/**
 * _puts - function declaration
 * @str: string pointer
 * Return: void
 */

void _puts(char *str);

/**
 * _puts - function definition
 * Description: prints a string
 * @str: the string pointer
 * Return: void
 */

void _puts(char *str)
{
	int index;

	for (index = 0; *(str + index) != '\0'; index++)
	{
		_putchar(*(str + index));
	}
	_putchar('\n');
}
