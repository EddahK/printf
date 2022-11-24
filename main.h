#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list args);
int _print_int(va_list args);
int _print_str(va_list args);
int (*_selct_func(char c))(va_list);


#endif
