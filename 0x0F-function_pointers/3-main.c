#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that performs simple operations.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0 if exited properly
*/

int main(int argc, char **argv)
{
	int (*op_func)(int, int);
	int ar1, ar2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ar1 = atoi(argv[1]);
	ar2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	if (!ar2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_func(ar1, ar2));
	return (0);
}
