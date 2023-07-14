#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_range - function that creates an array of integers.
* @min: minimum range
* @max: number of elements and maximum range.
* Return: pointer to new allocated array.
*/

int *array_range(int min, int max)
{
	int length, *ptr, i;

	if (min > max)
		return (NULL);

	length = max - min + 1;
	ptr = malloc(sizeof(int) * length);

	if (ptr == NULL)
		return (NULL);

	i = 0;

	while (i < length)
	{
		ptr[i++] = min++;
	}
		return (ptr);
}
