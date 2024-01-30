#include "main.h"

/**
 * _printf - Function that selects the correct function to print based on the format specifier.
 * @format: Format specifier to identify the type of data to be printed.
 * Return: The totalStringLength of the printed string.
 */
int _printf(const char * const format, ...)
{
    functionMatch formatHandlers[] = {
        {"%s", printString}, {"%c", print_character},
        {"%%", printPercentSymbol},
        {"%i", print_integer}, {"%d", print_decimal}, {"%r", print_reversed_string},
        {"%R", print_rotateBy13}, {"%b", printBinary},
        {"%u", print_unsigned},
        {"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX},
        {"%S", print_exc_string}, {"%p", printPointer}
    };

    va_list arguments;
    int m = 0, n, totalStringLength = 0;

    va_start(arguments, format);
    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);

findFunction:

    while (format[m] != '\0')
    {
        n = 13;
        while (n >= 0)
        {
            if (formatHandlers[n].identifier[0] == format[m] && formatHandlers[n].identifier[1] == format[m + 1])
            {
                totalStringLength += formatHandlers[n].funct(arguments);
                m = m + 2;
                goto findFunction;
            }
            n--;
        }
        _putchar(format[m]);
        totalStringLength++;
        m++;
    }
    va_end(arguments);
    return (totalStringLength);
}