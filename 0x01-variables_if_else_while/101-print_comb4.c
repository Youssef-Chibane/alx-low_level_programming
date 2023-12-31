#include <stdio.h>

/**
 * main - entry function
 * Description: program that prints all
 * possible different combinations of three digits.
 * Return: 0 if the program runs without any errors
 */

int main(void)
{
	int num1 = 0, num2, num3;

	while (num1 <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			num3 = 0;
			while (num3 <= 9)
			{
				if (num1 < num2 && num2 < num3)
				{
					putchar(num1 + 48);
					putchar(num2 + 48);
					putchar(num3 + 48);
					if (num1 + num2 + num3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
