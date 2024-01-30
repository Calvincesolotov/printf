#include "main.h"

/**
 * print_rot13 - Convert input string to ROT13 and print it.
 * @args: Arguments for printf
 *
 * Return: Number of characters printed.
 */
int print_rot13(va_list args)
{
	int i, j, counter = 0;
	int found_match = 0;
	int shift = 13;
	char *input_str = va_arg(args, char*);
	char alphabet[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char rot13_alphabet[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	/* Handle NULL input */
	if (input_str == NULL)
		input_str = "(null)";

	/* Iterate through the input string */
	for (i = 0; input_str[i]; i++)
	{
		found_match = 0;

		/* Check if the character is in the alphabet */
		for (j = 0; alphabet[j] && !found_match; j++)
		{
			if (input_str[i] == alphabet[j])
			{
				_putchar(rot13_alphabet[j]);
				counter++;
				found_match = 1;
			}
		}

		/* If the character is not in the alphabet, print it unchanged */
		if (!found_match)
		{
			_putchar(input_str[i]);
			counter++;
		}
	}

	return (counter);
}
