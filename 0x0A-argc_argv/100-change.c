#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: cents to give back.
*/

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, cents, count;

	i = 0;
	count = 0;

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

	while (i < 5)
	{
		count += cents / coins[i];
		cents %= coins[i];
		i++;
	}
		printf("%d\n", count);
		return (0);
}
