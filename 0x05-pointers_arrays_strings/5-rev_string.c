#include "main.h"

/**
* rev_string - function that reverses a string.
* @s: string that will be reversed
*/

void rev_string(char *s)
{
	int length, i;
	char x;

	for (length = 0; s[length] != '\0'; length++)
	;
	for (i = 0; i < length / 2; i++)
	{
		x = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = x;
	}
}
