#include <stdio.h>

/**
 * main - program entry point
 * Description: print size of data type
 * Return: 0
 */

int main(void)
{
	int charSize = sizeof(char);
	int intSize = sizeof(int);
	int longIntSize = sizeof(long int);
	int longLongIntSize = sizeof(long long int);
	int floatSize = sizeof(float);

	printf("Size of a char: %d byte(s)\n", charSize);
	printf("Size of an int: %d byte(s)\n", intSize);
	printf("Size of a long int: %d byte(s)\n", longIntSize);
	printf("Size of a long long int: %d byte(s)\n", longLongIntSize);
	printf("Size of a float: %d byte(s)\n", floatSize);
	return (0);
}
