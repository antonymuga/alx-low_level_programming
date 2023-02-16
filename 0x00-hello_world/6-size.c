#include <stdio.h>

/**
 * main - program entry point
 * Description: print size of data type
 * Return: 0
 */

int main(void)
{
	int charsize = sizeof(char);
	int intsize = sizeof(int);
	int longintsize = sizeof(long int);
	int longlongintsize = sizeof(long long int);
	int floatsize = sizeof(float);

	printf("Size of a char: %d byte(s)\n", charsize);
	printf("Size of an int: %d byte(s)\n", intsize);
	printf("Size of a long int: %d byte(s)\n", longintsize);
	printf("Size of a long long int: %d bytes(s)\n", longlongintsize);
	printf("Size of a float: %d bytes(s)\n", floatsize);
	return (0);
}
