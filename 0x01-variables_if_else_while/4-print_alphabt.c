#include <stdio.h>

/**
* main - entry function
* Description: print alphabet in lowercase except 'e' & 'q"
* Return: 0 if exited properly
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'q' && c != 'e')
		{
		putchar(c);
		}
		putchar('\n');
	}
	return (0);
}
