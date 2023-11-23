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

    _putchar(i);2

    return(1);
}

/**
 * print_int - print an integer in base 10
 * @ap: va  list
 * Return: 1 success
 */
int print_int(va_list ap)
	int i; 
	i = va_arg(ap, int);
{
	_putchar(i);

	return(1)
}

/**
 * print_decimal - print a decimal (base 10) number
 * @ap: va list
 * Return: 1 success
 */
int print_decimal( int n, int lastdigit)
{
        int i = 0;

        if (n < 0)
{
        _putchar ('-');
        n = (-1)* n;
};
if (n /10)
{
        i = print_decimal(n / 10, lastdigit +1);
}
_putchar (n% 10 + '0');
return (i);
}
