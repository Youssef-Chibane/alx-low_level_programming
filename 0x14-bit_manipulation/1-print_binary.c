#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to convert to binary and print.
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask <= n)
		mask <<= 1;

	if (mask >= n)
	mask >>= 1;

	while (mask)
	{
		if (mask & n)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}

