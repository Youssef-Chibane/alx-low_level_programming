#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *_strncat - function that concatenates two strings.
* @dest: string to append to
* @src: string to add
* @n: number of bytes
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	ptr++;
	while (n > 0 && *src != '\0')
	{
	*ptr = *src;
	ptr++;
	src++;
	n--;
	}
	*ptr = '\0';

	return (dest);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

/**
* _strlen - function that returns the length of a string
* @s: the string that we will return its length
* Return: return the string length
*/

int _strlen(char *s)
{
	 int length;

	for (length = 0; *s != '\0'; s++)
	{
	length++;
	}
	return (length);
}

/**
* string_nconcat - function that concatenates two strings.
* @s1: string to append.
* @s2: string to concatenate.
* @n: number if bytes.
* Return: pointer to new allocated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1;
	unsigned int length2;
	unsigned int concat_length;
	char *dest;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = _strlen(s1);
	length2 = _strlen(s2);
	concat_length = length1 + (n < length2 ? n : length2);

	dest = malloc((concat_length + 1) * sizeof(char));

	if (dest == NULL)
	{
		return (NULL);
	}

	_strcpy(dest, s1);
	_strncat(dest, s2, n);

	return (dest);
}
