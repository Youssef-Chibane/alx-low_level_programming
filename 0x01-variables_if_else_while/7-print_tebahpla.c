#include <stdio.h>

/**
* main - entry function
* Description: print alphabet reverse in lowercase
* Return: 0 if exited properly
*/

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
	{
		putchar(c);
	}
		putchar('\n');

	return (0);
}
