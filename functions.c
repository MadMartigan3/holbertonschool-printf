#include "main.h"

/**
 * print_char - function that display a character
 * @ap: va list
 * Return: 1 success.
*/

int print_char(va_list ap)
{
    int i;

    i = va_arg(ap, int);

    _putchar(i);

    return(1);
}

/**
 * print_str - function that print a strings
 * @ap: va list
 * Return: string characters
*/

int print_str(va_list ap)
{
    char *str;
    int len;

    str = va_arg(ap, char *);

    if (str == NULL){
        return (0);
    }

    for (len = 0; s[len] != '\0'; len++)
    {
        _putchar(s[len]);
    }
    return (len);
}

