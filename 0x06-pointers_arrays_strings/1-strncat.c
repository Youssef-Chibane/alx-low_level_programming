#include "main.h"

/**
* _strcat - function that concatenates two strings.
* @dest: string to append to
* @src: string to add
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	ptr++;
	while (n > 0 && *src != '\0')
	{
	*ptr = *src;
	ptr++;
	src++;
	n--;
	}
	*ptr = '\0';

	return (dest);
}
