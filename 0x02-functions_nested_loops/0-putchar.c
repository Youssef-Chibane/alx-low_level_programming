#include "main.h"

/**
 * main - entry function
 * Description: program that print "_putchar"
 * Return: 0 if program exited successfully
*/

int main(void)
{
char x[] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
	_putchar(x[i]);
}
	_putchar('\n');
	return (0);
}
