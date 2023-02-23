#include "main.h"

/**
 * _isdigit - function declaration
 * Description: test if digit
 * @c: value to check
 * Return: 1 for true, 0 for fals
 */

int _isdigit(int c);

/**
 * _isdigit - function definition
 * Description: test if c is a digit
 * @c: the value to test
 * Return: 1-true, 0-false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
