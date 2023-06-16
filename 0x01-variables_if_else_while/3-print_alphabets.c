#include <stdio.h>

/**
* main - entry function
* Description: print alphabet in lowercase and upperrcase
* Return: 0 if exited properly
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; ++c)
	{
		putchar(c);
	}
		putchar('\n');

	return (0);
}
