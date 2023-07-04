#include "main.h"
#include <stdio.h>

/**
* print_diagsums - function that prints the sum of the two
* diagonals of a square matrix of integers.
* @a: 2D array that we take numbers from
* @size: number of index
*/

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	i = 0;
	sum1 = 0;
	sum2 = 0;

	while (i < size)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
		i++;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
