#include "main.h"
/**
 * _printf - function that print
 * 
*/
int _printf(const char *format, ...)
{
 int i = 0, j = 0;
 va_list ap;

 function list[] = {
                {'c', print_char},
                {'s', print_str},
                {'d', print_decimal},
                {'i', print_int},
                {'%', print_percent},
                {'\0', NULL},
 };
va_start(ap, format);

while (format && format[i])
{
    while (list[j].letter)
    {
        if (format[i] == list[j].letter)
        {
            list[j].print(ap);
        }
        j++;
    }
    j = 0;
    i++;
}
_putchar("\n");
va_end(ap);
}