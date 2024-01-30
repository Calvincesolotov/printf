#include "main.h"

/**
 * str_length - finds the length of a mutable string.
 * @s: string
 * Return: integer.
 */

int str_length(char *s)
{
    int length;

    for (length = 0; s[length] != 0; length++)
        ;
    return length;
}

/**
 * str_length_const - finds the length of a constant string.
 * @s: string
 * Return: integer.
 */

int str_length_const(const char *s)
{
    int length;

    for (length = 0; s[length] != 0; length++)
        ;
    return length;
}
