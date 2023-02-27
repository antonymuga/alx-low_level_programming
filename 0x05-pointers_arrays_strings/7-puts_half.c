#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - function declaration
 * @str: string pointer
 * Return: void
 */

void puts_half(char *str);

/**
 * puts_half - function definition
 * Description: prints half a string
 * @str: the string pointer
 * Return: void
 */

void puts_half(char *str)
{
	int index;
	int string_len = _strlen(str);

	if (string_len % 2 != 0)
	{
		index = (string_len / 2) + 1;
	}
	else
	{
		index = (string_len / 2);
	}

	while (index < string_len)
	{
		_putchar(*(str + index));
		index++;
	}
	_putchar('\n');
}
