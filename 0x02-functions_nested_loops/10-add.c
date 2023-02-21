#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * add - function declaration
 * Description: add 2 numbers
 * @num1: first operand
 * @num2: second operand
 * Return: my_sum
 */

int add(int num1, int num2);

/**
 * add - function definition
 * Description: sum num1 and num2
 * @num1: the first number
 * @num2: the second number
 * Return: my_sum
 */

int add(int num1, int num2)
{
	int my_sum = num1 + num2;

	return (my_sum);
}
