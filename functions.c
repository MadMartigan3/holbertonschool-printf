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
 * print_char - function that display a character
 * @ap: va list
 * Return: 1
 */
int print_it(va_list ap)
