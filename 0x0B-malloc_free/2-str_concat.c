#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* str_concat - concatenates two strings.
* @s1: string to append to
* @s2: string to add
* Return: result
*/

char *str_concat(char *s1, char *s2)
{
	char *dest;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	dest = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (dest == NULL)
		return (NULL);

	strcpy(dest, s1);
	strcat(dest, s2);

	return (dest);
}
