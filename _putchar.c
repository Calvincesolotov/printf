#include "main.h"

/**
 * _putchar - Outputs the character 'c' to the standard output (stdout).
 * @c: The character to be printed
 *
 * Return: On success, returns 1. On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1); /* Utilizes the write system call to print the character to stdout */
}