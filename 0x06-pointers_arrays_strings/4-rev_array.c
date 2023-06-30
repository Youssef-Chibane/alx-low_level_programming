#include "main.h"

/**
* reverse_array - function that reverses the content of an array of integers.
* @a: array to be reversed
* @n: number of elements of the array
*/

void reverse_array(int *a, int n)
{
	int first = 0;
	int last = n - 1;

	while (first < last)
	{
		int tmp;

		tmp = a[first];
		a[first] = a[last];
		a[last] = tmp;

		first++;
		last--;
	}
}
