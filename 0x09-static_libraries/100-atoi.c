#include "main.h"

/**
 * _atoi - function declaration
 * @s: string pointer
 * Return: integer equivalen of string
 */

int _atoi(char *s);

/**
 * _atoi - function definition
 * Description: convert string to integer
 * @s: the string pointer
 * Return: integer value of string
 */

int _atoi(char *s)
{
	int num_sign = 1;
	unsigned int digit = 0;

	do {
		if (*s == '-')
		{
			num_sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = (digit * 10) + (*s - '0');
		}
		else if (digit > 0)
		{
			break;
		}
	} while (*s++);
	return (digit * num_sign);
}
