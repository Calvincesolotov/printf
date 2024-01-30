#include "main.h"

/**
 * print_character - Prints a character.
 *
 * @val: The argument list containing the character to be printed.
 *
 * Description: This function takes a character from the argument list and
 *              prints it using the _putchar function.
 *
 * Return: 1 - Always returns 1.
 */
int print_character(va_list val)
{
	char character;

	character = va_arg(val, int);
	_putchar(character);
	return (1);
}


