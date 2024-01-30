#include "main.h"

/**
 * print_hex_extra - Prints a hexadecimal representation of a number.
 * @num: The number to be printed in hexadecimal.
 *
 * Return: The number of characters printed.
 */
int print_hex_extra(unsigned long int num)
{
    long int i;
    long int *hexArray;
    long int counter = 0;
    unsigned long int temp = num;

    /* Count the number of digits in hexadecimal representation */
    while (num / 16 != 0)
    {
        num /= 16;
        counter++;
    }
    counter++;
    hexArray = malloc(counter * sizeof(long int));

    /* Populate the array with hexadecimal digits */
    for (i = 0; i < counter; i++)
    {
        hexArray[i] = temp % 16;
        temp = temp / 16;
    }

    /* Print the hexadecimal representation */
    for (i = counter - 1; i >= 0; i--)
    {
        if (hexArray[i] > 9)
            hexArray[i] = hexArray[i] + 39;
        _putchar(hexArray[i] + '0');
    }

    free(hexArray);  /* Free allocated memory */
    return (counter);  /* Return the number of characters printed */
}
