#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: the string to copy
* Return: NUll if str is NULL or failed to allocate memory,
* pointer to the duplicated string
*/

char *_strdup(char *str)
{
	int i = 0;
	char *result;

	if (str == NULL)
		return (NULL);

	result = malloc(sizeof(char) * (strlen(str) + 1));

	if (result == NULL)
		return (NULL);

	while (str[i])
	{
		result[i] = str[i];
		i++;
	}
		return (result);
}
