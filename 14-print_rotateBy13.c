#include "main.h"

/**
 * print_rotateBy13 - Convert to rot13
 * @args: printf arguments
 * Return: Counter
 */
int print_rotateBy13(va_list args)
{
	int i, j, counter = 0;
	int found_match = 0;  /* Flag to check if a character is found in 'al' array */
	char *s = va_arg(args, char*);
	char al[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char bl[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i]; i++)
	{
		found_match = 0;  /* Reset the flag for each character in 's' */

		for (j = 0; al[j] && !found_match; j++)
		{
			if (s[i] == al[j])
			{
				_putchar(bl[j]);
				counter++;
				found_match = 1;  /* Set the flag to indicate a match */
			}
		}

		if (!found_match)
		{
			_putchar(s[i]);
			counter++;
		}
	}

	return (counter);
}
