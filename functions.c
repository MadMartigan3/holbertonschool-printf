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

    for (len = 0; str[len] != '\0'; len++)
    {
        _putchar(str[len]);
    }
    return (len);
}

/**
 * print_percent - function that print %.
 * @ap: va list
 * 
*/

int print_percent(va_list ap)
{
    (void) ap;
    _putchar('%');

    return (1);
}

int print_recursion_decimal(int n)
{
    int i = 1;
    if (n / 10)
    {
        i += print_recursion_decimal(n / 10);
    }
    _putchar(n % 10 + '0');
    return (i);
}

/**
 * print_decimal - print a decimal (base 10) number
 * @ap: va list
 * Return: 1 success
 */
int print_decimal(va_list ap)
{
        int i = 0, n = 0;
        n = va_arg(ap, int);
        if (n < 0)
        {
            _putchar ('-');
            n = (-1)* n;
            i++;
        };
        i += print_recursion_decimal(n);
        return (i);
        
}
