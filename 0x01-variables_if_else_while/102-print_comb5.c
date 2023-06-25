#include <stdio.h>

/**
 * main - entry function
 * Description: program that prints all possible
 * combinations of two two-digit numbers.
 * Return: 0 if the program runs without any errors
 */

int main(void)
{
	int num1 = 0, num2;
	while (num1 <= 99)
	{
		num2 = num1;
		while (num2 <= 99)
		{
			if( num1 != num2)
			{
				putchar((num1 / 10) + 48);
				putchar((num1 % 10) + 48);
				putchar(' ');
				putchar((num2 / 10) + 48);
				putchar((num2 % 10) + 48);
				if (num1 != 98 || num2 != 99)
				{
				putchar(',');
				putchar(' ');
				}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
