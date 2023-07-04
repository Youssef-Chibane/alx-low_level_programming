#include "main.h"

/**
* print_chessboard - function that prints the chessboard.
* @a: 2D array we will print from
*/

void print_chessboard(char (*a)[8])
{
int row, columm;

	columm = 0;
	while (columm < 8)
	{
		row = 0;
		while (row < 8)
		{
			_putchar(a[columm][row]);
			row++;
		}
		columm++;
		_putchar('\n');
	}
}
