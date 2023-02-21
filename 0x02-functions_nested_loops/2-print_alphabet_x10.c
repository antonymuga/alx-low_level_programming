#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 * Description: print alphabet 10 times
 * Return: void
 */

void print_alphabet_x10(void);

/**
 * main - entry point
 * Description: calls print_alphabet_x10
 * Return: 0, success
 */

int main(void)
{
	print_alphabet_x10();
	return (0);
}

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
			putchar(letter);
		}
		putchar('\n');
		count++;
	}
}
