#include "main.h"

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
