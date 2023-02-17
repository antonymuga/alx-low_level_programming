#include <stdio.h>

/**
 * main - entry point
 * Description: print all base 16 numbers
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 15; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
