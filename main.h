#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct format
{
    char *identifier;
    int (*funct)();
}functionMatch;


int _printf(const char *format, ...);
int printPercentSymbol(void);
int _strlen(char *s);
int _strlenc(const char *s);
int printString(va_list val);
int print_character(va_list val);
int _putchar(char c);
int print_integer(va_list args);
int print_decimal(va_list args);
int printBinary(va_list val);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_HEX(va_list val);
int print_hex(va_list val);
int print_HEX_extra(unsigned int num);
int print_exc_string(va_list val);
int print_pointer(va_list val);
int print-hex_extra(unsigned long int num);
int print_reversed_string(va_list args);
int print_rotateBy13(va_list args);



#endif