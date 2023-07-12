#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: number of arguments.
 * @av: array of arguments.
 * Return: NULL if ac = 0, NULL if av is NULL, the concatenated arguments.
*/

char *argstostr(int ac, char **av)
{
	int i = 0, length = 0;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (i < ac)
	{
		length += strlen(av[i]) + 1;
		i++;
	}

	result = malloc(sizeof(char) * (length + 1));

	if (result == NULL)
	{
		return (NULL);
	}

	result[0] = '\0';

	for (i = 0; i < ac; i++)
	{
		strcat(result, av[i]);
		strcat(result, "\n");
	}

		return (result);
}
