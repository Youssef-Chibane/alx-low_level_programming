#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	int r = i * j;

	if (r < 10)
	{
		_putchar(r + '0');
	if (j < 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	}
	else
	{
		_putchar((r / 10) + '0');
		_putchar((r % 10) + '0');
	if (j < 9)
	{
		_putchar(',');
		_putchar(' ');
	}
	}
	}
	_putchar('\n');
	}
}

