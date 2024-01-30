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
int print_s(va_list val);
int print_character(va_list val);
int _putchar(char c);
int print_i(va_list args);
int print_d(va_list args);
int print_bin(va_list val);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_HEX(va_list val);
int print_hex(va_list val);
int print_HEX_extra(unsigned int num);
int print_exc_string(va_list val);
int print_pointer(va_list val);
int print_hex_extra(unsigned long int num);
int print_revs(va_list args);
int print_rot13(va_list args);



#endif