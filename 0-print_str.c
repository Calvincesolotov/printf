#include "main.h"

/**
 * _strlen - finds the lenght of a string.
 * @s: string
 * Return: integer.
 */

int strlength(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}

/**
 * _strlenc - finds length of a string but for constant characters
 * @s: string
 * Return: integer
 */

int strlenConstant(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}

