#include "main.h"

/**
 * _strlen - finds the lenght of a mutable string.
 * @s: string
 * Return: integer.
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != 0; length++)
		;
	return (length);

}

/**
 * _strlenc - finds length of a constant string
 * @s: string
 * Return: integer
 */

int _strlenc(const char *s)
{
	int length;

	for (length = 0; s[length] != 0; length++)
		;
	return (length);
}

