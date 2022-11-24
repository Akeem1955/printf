#include "main.h"
/**
 * handle_print - print out formated string
 * @format:string to be formated
 * Return: the length of the printed words
 */

int handle_print(const char *format, va_list placeholder_list, Format_map map[])
{    
    int printed_chars, i, temp;
    
    printed_chars = 0;
    while (*(format))
    {
        if (*format == '%')
        {
            for (i = 0; map[i].specifier != '\0'; i++)
            {
                if (*(format + 1) == map[i].specifier)
                {
                    temp = map[i].handle_specifier(placeholder_list);
                    if (map[i].specifier == 's')
                    {
                        va_arg(placeholder_list, char*);
                    } else
                    {
                        va_arg(placeholder_list, int);
                    }
                    if (temp == -1) 
						return (-1);
					printed_chars += temp;
                    break;
                }

            }

            if (map[i].specifier == '\0' && *(format + 1) != '\0')
            {
                printed_chars += *(format + 1) == '%' ? print_percent((format + 1), 0) : print_percent((format), 1);
            } else if (*(format + 1) == '\0')
            {
                return (-1);
            }
            format++;

        } else
        {
            printed_chars += _putchar(*format);
        }
        format++;
    }
    return (printed_chars);
}