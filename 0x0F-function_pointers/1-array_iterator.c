#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array.
 * @array: array to print
 * @size: size of elements to pring
 * @action: pointer to the function used
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;

	if (array == NULL && action == NULL)
	{
		return;
	}

	while (i < size)
	{
		action(array[i++]);
	}
}
