#include "main.h"
#include <stdio.h>

/**
*  *_strchr - function that locates a character in a string.
* @s: sting that will be checked
* @c: the character that will be located
* Return: Returns a pointer to the first occurrence of @c
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
			return (NULL);
}
