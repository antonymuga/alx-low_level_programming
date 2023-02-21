#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: sum numbers if %3 %5 is 0
 * Return: 0
 */

int main(void)
{
	int test_num;
	int sum = 0;

	for (test_num = 0; test_num <= 1024; test_num++)
	{
		if ((test_num % 3 == 0) || (test_num % 5 == 0))
		{
			sum += test_num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
