#include <stdio.h>

/**
 * main - entry function
 * Description: program that prints all possible
 * different combinations of two digits
 * Return: 0 if the program runs without any errors
 */

int main(void)
{
	int num1 = 0, num2;

	while (num1 <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			if (num1 < num2)
			{
				putchar(num1 + 48);
				putchar(num2 + 48);
				if (num1 + num2 != 17)
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
