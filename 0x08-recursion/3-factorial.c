#include "main.h"

/**
 * factorial - function declaration
 * @n: the number
 * Return: factor or -1
 */

int factorial(int n);

/**
 * factorial - function definition
 * @n: the number to use
 * Description: find factorial of n
 * Return: factor / -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
