#include <unistd.h>

/**
 * main - Program entry point
 * Description: Prints the specified string
 * Return: 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
