#include <stdio.h>

/**
 * prime_factors - function declaration
 * Description: finds largest prime factor
 * @test_num: number to test
 * Return: void
 */

void prime_factors(long test_num);

/**
 * main - entry point
 * Description: calls prime_factors
 * Return: 0
 */

int main(void)
{
	prime_factors(612852475143);
	return (0);
}

/**
 * prime_factors - function definition
 * Description: finds the largest prime factor
 * @test_num: the number to test
 * Return: void
 */

void prime_factors(long test_num)
{
	long divisor = 2;

	while (divisor != test_num)
	{
		if (test_num % divisor == 0)
		{
			test_num /= divisor;
		}
		else
		{
			divisor++;
		}
	}
	printf("%ld\n", test_num);
}
