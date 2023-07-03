#include "main.h"

/**
* *_memcpy - function that copies memory area.
* @dest: memorye area destination
* @src: memory area source
* @n: number of bytes to copy
* Return: Returns a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
		return (dest);
}
