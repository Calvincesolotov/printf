#include "main.h"

/**
 * _strlen - finds the lenght of a mutable string.
 * @s: string
 * Return: integer.
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}

/**
 * _strlenc - finds length of a constant string
 * @s: string
 * Return: integer
 */

int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}

