#include "main.h"

/**
 * print_reversed_string - Prints a string in reverse.
 * @args: A va_list representing the variable argument list.
 *
 * Return: The length of the string.
 */
int print_reversed_string(va_list args)
{
    char *input_string = va_arg(args, char*);
    int str_length, i;

    if (input_string == NULL)
        input_string = "(null)";

    str_length = 0;
    while (input_string[str_length] != '\0')
        str_length++;

    for (i = str_length - 1; i >= 0; i--)
        _putchar(input_string[i]);

    return str_length;
}
