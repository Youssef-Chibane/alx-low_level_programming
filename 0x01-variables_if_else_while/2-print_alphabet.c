#include <stdio.h>

/**
* main - entry function
* Description: print alphabet in lowercase
* Return: 0 if exited properly
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
		putchar('\n');

	return (0);
}
