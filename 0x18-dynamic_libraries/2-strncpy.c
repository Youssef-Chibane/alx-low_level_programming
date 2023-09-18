#include "main.h"

/**
* *_strncpy - function that copies a string.
* @dest: destination string
* @src: string to copy from
* @n: number of bytes
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	for ( ; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
