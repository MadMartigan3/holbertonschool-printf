#include "main.h"
/**
 * _printf - function that print
 * 
*/
int _printf(const char *format, ...)
{

 int i = 0, j, printed_char = 0;
 va_list ap;

 function list[] = {
                {'c', print_char},
                {'s', print_str},
               /** {'d', print_decimal},*/
                {'i', print_int},
                {'%', print_percent},
                {'\0', NULL},
 };
    va_start(ap, format);

    while (format && format[i])
    {
        if (format[i] == '%')
        {
            j = 0;
            i++;
            while (list[j].letter != '\0')
            {
                if (list[j].letter == format[i])
                {
                    printed_char += list[j].print(ap);
                    break;
                }
                j++;
            }
        }
        else
            {
                _putchar(format[i]);
                printed_char++;
            }
        i++;
    }
    return(printed_char);
}
