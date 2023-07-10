#include "main.h"
#include <stdio.h>

/**
* *_strstr - function that locates a substring.
* @haystack: the string to search in
* @needle: the substring to search for
* Return: return the substring
*/

char *_strstr(char *haystack, char *needle)
{
int i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			j++;
			if (haystack[i + j] != needle[j])
				break;
		}
			i++;
			if (!needle[j])
			return (&haystack[i - 1]);
	}
	return (NULL);
}
