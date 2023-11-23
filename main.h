#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>

typedef struct print
{
    char letter;
    int (*print)(va_list ap);
} function;


int _printf(const char *format, ...);
int print_char(va_list ap);
int print_str(va_list ap);
int print_percent(va_list ap);
int print_decimal(va_list ap);
int _putchar(char c);
int print_recursion_decimal(int n);
#endif
