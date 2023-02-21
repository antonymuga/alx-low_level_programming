#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Description: fibonacci for 1st 50
 * Return: 0, sucess
 */

int main(void)
{
	int counter = 0;
	long num1 = 1;
	long num2 = 2;

	while (counter < 50)
	{
		if (counter == 0)
		{
			printf("%ld", num1);
		}
		else if (counter == 1)
		{
			printf(", %ld", num2);
		}
		else
		{
			num2 = num2 + num1;
			num1 = num2 - num1;
			printf(", %ld", num2);
		}

		++counter;
	}
	printf("\n");
	return (0);
}
