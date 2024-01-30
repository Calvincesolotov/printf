#include "main.h"
/**
 * print_i - prints integer
 * @args: argument to print
 * Return: integer
 */

int print_integer(va_list args)
{
    int input_number = va_arg(args, int);
    int current_digit, last_digit = input_number % 10;
    int remaining_number, divisor = 1;
    int character_count = 1;

    input_number = input_number / 10;
    remaining_number = input_number;

    if (last_digit < 0)
    {
        _putchar('-');
        remaining_number = -remaining_number;
        input_number = -input_number;
        last_digit = -last_digit;
        character_count++;
    }

    if (remaining_number > 0)
    {
        while (remaining_number / 10 != 0)
        {
            divisor = divisor * 10;
            remaining_number = remaining_number / 10;
        }

        remaining_number = input_number;
        while (divisor > 0)
        {
            current_digit = remaining_number / divisor;
            _putchar(current_digit + '0');
            remaining_number = remaining_number - (current_digit * divisor);
            divisor = divisor / 10;
            character_count++;
        }
    }

    _putchar(last_digit + '0');

    return character_count;
}

/**
 * print_d - prints decimal
 * @args: argument to print
 * Return: integer
 */

int print_decimal(va_list args)
{
    int input_number = va_arg(args, int);
    int current_digit, last_digit = input_number % 10;
    int remaining_number, divisor = 1;
    int character_count = 1;

    input_number = input_number / 10;
    remaining_number = input_number;

    if (last_digit < 0)
    {
        _putchar('-');
        remaining_number = -remaining_number;
        input_number = -input_number;
        last_digit = -last_digit;
        character_count++;
    }

    if (remaining_number > 0)
    {
        while (remaining_number / 10 != 0)
        {
            divisor = divisor * 10;
            remaining_number = remaining_number / 10;
        }

        remaining_number = input_number;
        while (divisor > 0)
        {
            current_digit = remaining_number / divisor;
            _putchar(current_digit + '0');
            remaining_number = remaining_number - (current_digit * divisor);
            divisor = divisor / 10;
            character_count++;
        }
    }

    _putchar(last_digit + '0');

    return character_count;
}