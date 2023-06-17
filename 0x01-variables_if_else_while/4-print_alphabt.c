#include <stdio.h>

/**
* main - entry function
* Description: print alphabet in lowercase except 'e' & 'q"
* Return: 0 if exited properly
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
