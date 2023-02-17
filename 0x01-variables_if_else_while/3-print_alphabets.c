#include <stdio.h>
/**
 * main - entry point
 * Description: print alphabet except
 * Return: 0
 */

int main(void)
{
	char letterLower = 'a';
	char letterUpper = 'A';

	for (letterLower = 'a'; letterLower <= 'z'; letterLower++)
	{
		putchar(letterLower);
	}
	for (letterUpper = 'A'; letterUpper <= 'Z'; letterUpper++)
	{
		putchar(letterUpper);
	}
	putchar('\n');
	return (0);
}
