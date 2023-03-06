#include <unistd.h>

/**
 * _putchar - prints/writes c
 * @c: The character to print
 * Return: 1, success, -1 error
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
