#include <stdio.h>

/**
 * main - Entry point
 * Description: prints  possible combination of 2 digit numbers
 * Return: 0
 */
int main(void)
{
	int num1, num2, num3, num4;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			for (num3 = 48; num3 <= 57; num3++)
			{
				for (num4 = 48; num4 <= 57; num4++)
				{
				if (((num3 + num4) > (num1 + num2) &&  num3 >= num1) || num1 < num3)
				{
					putchar(num1);
					putchar(num2);
					putchar(' ');
					putchar(num3);
					putchar(num4);

					if (num1 + num2 + num3 + num4 == 227 && num1 == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
