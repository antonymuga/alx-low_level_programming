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
 * main - entry point
 * Description: calls print_alphabet
 * Return: 0, success
 */

int main(void)
{
	print_alphabet();
	return (0);
}

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
		putchar(letter);
		letter++;
	}
	putchar('\n');
}

