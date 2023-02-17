#include <stdio.h>

/**
 * main - entry point
 * Description: print digits using putchar
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
