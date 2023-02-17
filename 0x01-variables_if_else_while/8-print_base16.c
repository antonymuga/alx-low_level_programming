#include <stdio.h>

/**
 * main - entry point
 * Description: print all base 16 numbers
 * Return: 0
 */

int main(void)
{
	char digit = '0';
	char letter;

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
