#include "main.h"

/**
* swap_int - function that swaps the values of two integers.
* @a: the integer that wikk be swapped
* @b: the integer that wikk be swapped
*/


void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
