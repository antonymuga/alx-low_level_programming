#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * fizz_buzz - function declaration
 * Description: prints fizz, buzz or fizbuzz for multiples
 * of 3 and 5
 * @range: the end number
 * Return: void
 */

void fizz_buzz(int range);

/**
 * main -entry point
 * Description: calls fizz_buzz
 * Return: 0
 */

int main(void)
{
	fizz_buzz(100);
	return (0);
}

/**
 * fizz_buzz - function definition
 * Description: print fizz or buzz for multiples of 3
 * and 5
 * @range: the ending number
 * Return: void
 */

void fizz_buzz(int range)
{
	int number;

	for (number = 1; number <= range; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", number);
		}
		if (number != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
}
