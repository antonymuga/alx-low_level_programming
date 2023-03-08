#include "main.h"

/**
 * _pow_recursion - function declaration
 * @x: integer to power
 * @y: power integer
 * Return: integer value
 */

int _pow_recursion(int x, int y);

/**
 * _pow_recursion - function definition
 * @x: the integer to power
 * @y: the power to raise to
 * Description: raise x to power y
 * Return: an integer value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
