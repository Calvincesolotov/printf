#include "main.h"

/**
 * printBinary - prints binary representation of an unsigned integer.
 * @val: variable argument list.
 * Return: number of characters printed
 */
int printBinary(va_list val)
{
    int hasSetBit = 0;      /* Flag to track if a bit has been set */
    int charCount = 0;      /* Count of characters printed */
    int i, mask = 1, bit;    /* Loop variable, bitmask, and individual bit */

    unsigned int number = va_arg(val, unsigned int);   /* Extract the unsigned int */
    unsigned int shiftedBit;                            /* Variable to store shifted bit */

    /* Loop through each bit of the 32-bit representation of the input number */
    for (i = 0; i < 32; i++)
    {
        shiftedBit = ((mask << (31 - i)) & number);    /* Shift the bitmask and apply it to the number */
        
        if (shiftedBit >> (31 - i))
            hasSetBit = 1;  /* If the bit is non-zero, set the flag */

        if (hasSetBit)
        {
            bit = shiftedBit >> (31 - i);
            _putchar(bit + '0'); /* Print the binary representation of the bit */
            charCount++;
        }
    }

    /* If no bits were set, print '0' */
    if (charCount == 0)
    {
        charCount++;
        _putchar('0');
    }

    return (charCount);
}
