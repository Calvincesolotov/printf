#include "main.h"
#include <stdio.h>

int print_string(const char *str);

int _printf(const char *format, ...) {
    int characters_printed = 0;

    va_list args_list;

    if (format == NULL) {
        return (-1);
    }

    va_start(args_list, format);

    while (*format) {
        if (*format != '%') {
            write(1, format, 1);
            characters_printed++;
        } else {
            format++;

            if (*format == '\0') {
                break;
            }

            if (*format == '%') {
                write(1, format, 1);
                characters_printed++;
            } else if (*format == 'c') {
                char character = va_arg(args_list, int);
                write(1, &character, 1);
                characters_printed++;
            } else if (*format == 's') {
                char *string = va_arg(args_list, char*);
                characters_printed += print_string(string);
            }
        }

        format++;
    }

    va_end(args_list);
    return characters_printed;
}

int print_string(const char *str) {
    int str_length = 0;

    while (str[str_length] != '\0') {
        str_length++;
    }

    write(1, str, str_length);
    return str_length;
}

int main() {
    _printf("Calvince\n");
    _printf("%c\n", 'k');
    _printf("%s\n", "school");
    _printf("%%\n");
    return 0;
}