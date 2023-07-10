#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character that will be checked
 * Return: 1 if c is a character, 0 is not a character
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
