#include "main.h"

/**
 * _strlen - Finds the length of a mutable string.
 * @str: The string
 * Return: The length of the string as an integer.
 */

int strlenMutable(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;
	return (length);
}

/**
 * _strlenc - Finds the length of a constant string.
 * @str: The string
 * Return: The length of the string as an integer.
 */

int _strlenConstant(const char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;
	return (length);
}
