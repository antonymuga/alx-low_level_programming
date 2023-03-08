#include "main.h"

/**
 * my_sqrt - function declaration
 * @my_num: the number
 * @my_root: the root
 * Return: square root or -1
 */

int my_sqrt(int my_num, int my_root);

/**
 * _sqrt_recursion - function definition
 * @n: the number
 * Return: square root of -1
 */

int _sqrt_recursion(int n);

/**
 * my_sqrt - function definition
 * @my_num: the number whose square root we are finding
 * @my_root: the root that will be tested
 * Description: if my number has natural square root
 * Return: the square root or -1
 */

int my_sqrt(int my_num, int my_root)
{
	if ((my_root * my_root) == my_num)
	{
		return (my_root);
	}
	else if (my_root == my_num / 2)
	{
		return (-1);
	}
	else
	{
		return (my_sqrt(my_num, my_root + 1));
	}
}

/**
 * _sqrt_recursion - function definition
 * @n: the number to return square
 * Description: if n has natural square return it else
 * return -1
 * Return: the square root of -1
 */

int _sqrt_recursion(int n)
{
	int the_root = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (my_sqrt(n, the_root));
	}
}
