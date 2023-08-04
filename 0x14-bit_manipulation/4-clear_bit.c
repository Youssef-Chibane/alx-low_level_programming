#include "main.h"

/**
 * clear_bit - Clears the value of a bit at a given index to 0.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if successful, or -1 if index is too large.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n & ~(1UL << index);

	return (1);
}

