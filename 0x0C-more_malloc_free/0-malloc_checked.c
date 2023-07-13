#include "main.h"

/**
* malloc_checked - function that allocates memory using malloc.
* @b: number of bytes.
* Return: a pointer to the allocated memory.
*/

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
	{
		exit(98);
	}
		return (ptr);
}
