#include <stdio.h>
/**
 * main - entry point
 * Description: Print numbers 0-9
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
