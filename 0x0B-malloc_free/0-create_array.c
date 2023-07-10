#include <stdio.h>
#include <stdlib.h>

/**
* create_array - create an array of chars,
* and initializes it with a specific char.
* @size: size of the array.
* @c: the char to initialize with.
* Return: NULL if size = 0, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		array[i] = c;
		i++;
	}
		return (array);
}
