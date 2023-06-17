#include <stdio.h>

/**
* main - entry function
* Description: print base 10 numbers using putchar
* Return: 0 if exited properly
*/

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
	}
		putchar('\n');

	return (0);
}
