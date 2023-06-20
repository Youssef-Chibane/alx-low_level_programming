#include "main.h"

/**
 * print_sign - print the sign of number
 * @n: the number that will be checked
 * Return: 1 if number > 0 or 0 if number = 0 or -1 if number < 0
*/

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
