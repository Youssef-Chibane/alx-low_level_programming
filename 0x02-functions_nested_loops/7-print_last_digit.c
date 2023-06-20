#include "main.h"

/**
 * print_last_digit - print the last digit of a number.
 * @x : the number to check
 * Return: the value of the last digit
*/

int print_last_digit(int x)
{
	int y;

	if (x < 0)
		y = -1 * (x % 10);
	else
		y = x % 10;
	_putchar((y % 10) + '0');
	return (y % 10);
}
