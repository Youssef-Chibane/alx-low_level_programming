#include <stdio.h>

/**
* main - entry function
* Description: print all numbers in 16 base
* Return: 0 if exited properly
*/

int main(void)
{
	int x;
	char c;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
