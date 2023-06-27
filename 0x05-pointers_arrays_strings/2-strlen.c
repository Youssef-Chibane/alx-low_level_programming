#inlcude "main.h"

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
