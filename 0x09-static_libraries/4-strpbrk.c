#include "main.h"

/**
* *_strpbrk - function that searches a string for any of a set of bytes.
* @s: string that we searches in it
* @accept: set of bytes where looking for
* Return: the bytes that matches accept
*/

char *_strpbrk(char *s, char *accept)
{
int i, j;
char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
