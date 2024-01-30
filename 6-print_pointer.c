#include "main.h"

/**
 * print_pointer - Prints a hexadecimal number representing a pointer.
 * @args: Arguments list.
 * Return: Number of characters printed.
 */
int printPointer(va_list args)
{
	void *ptr;
	char *nil_str = "(nil)";
	unsigned long int hex_value;
	int char_count;
	int i;

	ptr = va_arg(args, void*);

	if (ptr == NULL)
	{
		for (i = 0; nil_str[i] != '\0'; i++)
		{
			_putchar(nil_str[i]);
		}
		return (i);
	}

	hex_value = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	char_count = print_hex_extra(hex_value);

	return (char_count + 2);
}
