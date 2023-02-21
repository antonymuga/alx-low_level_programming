#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - function declaration
 * Description: print alphabet in lowercase 10 times
 * Return: void
 */

void print_alphabet_x10(void);

/**
 * print_alphabet_x10 - print alphabet 10 times
 * Description: has no arguements
 * Return: has no return value
 */

void print_alphabet_x10(void)
{
	char letter;
	int count = 0;

	while (count <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		count++;
	}
}
