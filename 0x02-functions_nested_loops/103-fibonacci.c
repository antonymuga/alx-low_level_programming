#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Description: fibonacci sequence
 * Return: 0
 */

int main(void)
{
	int sum = 0;
	long int num1 = 1;
	long int num2 = num1;
	long int num3 = num1 + num2;

	while (num3 < 4000000)
	{
		if (num3 % 2 == 0)
		{
			sum += num3;
		}
		num1 = num2;
		num2 = num3;
		num3 = num1 + num2;
	}
	printf("%d\n", sum);
	return (0);
}
