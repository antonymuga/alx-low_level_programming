#include "main.h"

/**
 * _print_rev_recursion - function declaration
 * @s: the string
 * Return: void
 */

void _print_rev_recursion(char *s);

/**
 * _print_rev_recursion - function definition
 * @s: the string to recurse through
 * Description: print a string in reverse using recursion
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
