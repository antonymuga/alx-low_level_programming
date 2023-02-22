#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - tests number sign
 * @i: the number
 * Description: prints number sign
 * Return: 0
 */

void positive_or_negative(int i);

/**
 * positive_or_negative - tests sign
 * @i: the number to test
 * Description: Tests whether n is +, - or zero
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
