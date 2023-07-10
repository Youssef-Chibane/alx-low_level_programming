#include "main.h"

/**
* _strspn - function that gets the length of a prefix substring.
* @s: string that will be checked
* @accept: the bytes that will find their lenght
* Return: lenthg of the bytes given
*/

unsigned int _strspn(char *s, char *accept)
{
int i = 0, j;

	while (s[i] != 0)
	{
		j = 0;
		while (accept[j] != s[i])
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
			j++;
		}
		i++;
	}
	return (i);
}
