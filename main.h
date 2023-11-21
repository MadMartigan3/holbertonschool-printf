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
};


int _printf(const char *format, ...);
int _putchar(char c);
#endif