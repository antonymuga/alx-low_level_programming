#include <stdio.h>

/**
 * main - entry point
 * Description: print alphabet except q & e
 * Return: 0
 */

int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		else
		{
			putchar(letter);
		}
	putchar('\n');
	return (0);
}
