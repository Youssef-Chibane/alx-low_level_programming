#include <stdio.h>

/**
* main - program that prints all arguments it receives.
* @argc: number of arguments.
* @argv: array of arguments.
* Return: return 0 if the program implemented successfully.
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
		return (0);
}
