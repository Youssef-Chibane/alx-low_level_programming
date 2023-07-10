#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: width of the grid.
* @height: height of the grid.
* Return: pointer to the grid.
*/

int **alloc_grid(int width, int height)
{
	int **arr;
	int row = 0, column = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	while (column < height)
	{
		arr[column] = malloc(sizeof(int) * width);
		if (arr[column] == NULL)
		{
			while (column > 0)
			{
				column--;
				free(arr[column]);
			}
			free(arr);
			return (NULL);
		}
		column++;
	}

	while (column < height)
	{
		while (row < width)
		{
			arr[column][row] = 0;
		}
	}
		return (arr);
}
