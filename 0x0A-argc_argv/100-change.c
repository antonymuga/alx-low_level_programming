#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: prints minimum number of coins to make change
 * @argc: arguement count
 * @argv: argument array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins[5] = {25, 10, 5, 2, 1};
	int num_coins;
	int i;
	int coin_count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = 0;

	for (i = 0; i < 5; i++)
	{
		coin_count = cents / coins[i];
		num_coins += coin_count;
		cents -= coin_count * coins[i];
	}
	printf("%d\n", num_coins);
	return (0);
}
