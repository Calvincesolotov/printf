#include "main.h"

/**
 * print_integer - prints an integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_integer(va_list args)
{
    int number = va_arg(args, int);
    int num_copy, last_digit = number % 10, digit, exp = 1;
    int character_count = 1;

    number = number / 10;
    num_copy = number;

    if (last_digit < 0)
    {
        _putchar('-');
        num_copy = -num_copy;
        number = -number;
        last_digit = -last_digit;
        character_count++;
    }

    if (num_copy > 0)
    {
        while (num_copy / 10 != 0)
        {
            exp = exp * 10;
            num_copy = num_copy / 10;
        }

        num_copy = number;

        while (exp > 0)
        {
            digit = num_copy / exp;
            _putchar(digit + '0');
            num_copy = num_copy - (digit * exp);
            exp = exp / 10;
            character_count++;
        }
    }

    _putchar(last_digit + '0');

    return (character_count);
}

/**
 * print_decimal - prints a decimal
 * @args: argument to print
 * Return: number of characters printed
 */
int print_decimal(va_list args)
{
    int number = va_arg(args, int);
    int num_copy, last_digit = number % 10, digit;
    int character_count = 1;
    int exp = 1;

    number = number / 10;
    num_copy = number;

    if (last_digit < 0)
    {
        _putchar('-');
        num_copy = -num_copy;
        number = -number;
        last_digit = -last_digit;
        character_count++;
    }

    if (num_copy > 0)
    {
        while (num_copy / 10 != 0)
        {
            exp = exp * 10;
            num_copy = num_copy / 10;
        }

        num_copy = number;

        while (exp > 0)
        {
            digit = num_copy / exp;
            _putchar(digit + '0');
            num_copy = num_copy - (digit * exp);
            exp = exp / 10;
            character_count++;
        }
    }

    _putchar(last_digit + '0');

    return (character_count);
}
