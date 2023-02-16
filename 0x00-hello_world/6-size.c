#include <stdio.h>

/**
 * main - program entry point
 * Description: print size of data type
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int);
	printf("Size of a float: %zu bytes(s)\n", sizeof(float));
	return (0);
}
