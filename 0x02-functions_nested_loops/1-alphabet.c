#include "main.h"

/**
 *  print_alphabet - print all alphabet and end with a new line
 * Return: void
*/

void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c++);
	}
		_putchar('\n');
}
