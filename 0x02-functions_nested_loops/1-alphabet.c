#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_alphabet - print alphabet
 * Description: print alphabet in lowercase
 * Return: has no return value
 */

void print_alphabet(void);

/**
 * print_alphabet - prints the alphabet
 * Description: prints the alphabet in lowercase
 * Return: has no return value
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

