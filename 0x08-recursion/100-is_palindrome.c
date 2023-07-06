#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string to be evaluated
 * Return: string lenght
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * check_palindrome - check check every character from left and right.
 * @right: check the current index of right.
 * @left: check the current index of left.
 * @s: the sting that will be checked
 * Return: return 1 if palindrome and 0 if not.
*/

int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	else if (s[left] == s[right])
	{
		return (check_palindrome(s, left + 1, right - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: the sting that will be checked
 * Return: return 1 if palindrome and 0 if not.
*/

int is_palindrome(char *s)
{
	int lenght = _strlen_recursion(s);

	if (lenght == 0 || lenght == 1)
	{
		return (1);
	}
	return (check_palindrome(s, 0, lenght - 1));
}
