#include "main.h"
#include <stdarg.h>

/**
 * printString - Prints a string.
 * @val: Argument containing the string to be printed.
 *
 * Return: The length of the string.
 */
int printString(va_list val)
{
	char *inputString;
	int index, stringLength;

	inputString = va_arg(val, char *);

	if (inputString == NULL)
	{
		inputString = "(null)";
		stringLength = _strlen(inputString);

		for (index = 0; index < stringLength; index++)
			_putchar(inputString[index]);

		return (stringLength);
	}
	else
	{
		stringLength = _strlen(inputString);

		for (index = 0; index < stringLength; index++)
			_putchar(inputString[index]);

		return (stringLength);
	}
}
