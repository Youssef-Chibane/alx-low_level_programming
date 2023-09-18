#include "main.h"

/**
* _strcmp - function that compares two strings.
* @s1: firsr string
* @s2: second string
* Return: result
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
	s1++;
	s2++;
	}

	return (*(char *)s1 - *(char *)s2);
}
