#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_char - function declaration
 * Description: print _putchar, has no arguements
 * Return: has no return value
 */

char print_char(void);

/**
 * main - entry point
 * Description: calls print_char()
 * Return: 0
 */

int main(void)
{
	print_char();
	return (0);
}

/**
 * print_char - function definition
 * Description: prints out '_putchar'
 * Return: has no return value
 */

char print_char(void)
{
	char my_string_array[] = "_putchar\n";
	int index = 0;

	while (my_string_array[index] != '\0')
	{
		char letter = my_string_array[index];

		putchar(letter);
		index++;
	}
	return (0);
}
