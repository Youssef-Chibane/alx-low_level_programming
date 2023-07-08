#include <stdio.h>
#include <stdlib.h>

/**
* main - program that adds positive numbers.
* @argc: number of arguments.
* @argv: array of arguments.
* Return: return 0 if the program implemented successfully.
*/

int main(int argc, char *argv[])
{
	int i = 1, j = 0;
	int sum = 0;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum  += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
