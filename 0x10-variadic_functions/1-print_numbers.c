#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: number of parameters passed to the function.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	int num = va_arg(args, int);
		printf("%d", num);

	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
