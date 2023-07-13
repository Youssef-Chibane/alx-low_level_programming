#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_memset - function that fills memory with a constant byte.
* @s: the memory location that will be filled
* @b: the char that will be coppied
* @n: number of times to copy
* Return: Returns a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

	while (i < n)
	{
		s[i++] = b;
	}
		return (s);
}

/**
* _calloc - function that allocates memory for an array, using malloc.
* @size: the size of each element.
* @nmemb: the number of elements in the array
* Return: pointer to allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, size * nmemb);

	return (ptr);
}
