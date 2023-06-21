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
		_putchar('0' + r);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	else
	{
		_putchar('0' + (r / 10));
		_putchar('0' + (r % 10));
		_putchar(',');
		_putchar(' ');
	}
	}
	_putchar('\n');
	}
}
