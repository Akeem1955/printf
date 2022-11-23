#include "main.h"
/**
 * _printf - print out formated string
 * @format:string to be formated
 * Return: the length of the printed words
 */

int _printf(const char *format, ...)
{
	va_list arg_list;
	int printed_chars;

	printed_chars = 0;
	if (!(format))
	{
		return (-1);
	}
	va_start(arg_list, format);
	/* start formatting string */

	while (*format)
	{
		if (*format == '%')
		{
			switch (*(format + 1))
			{
			case 's':
				printed_chars += print_string(arg_list);
				format++;
				break;
			case 'c':
				printed_chars += print_char(arg_list);
				format++;
				break;
			case '%':
				printed_chars += _putchar(*(format + 1));
				format++;
				break;
			default:
				printed_chars += _putchar(*(format));
				printed_chars += _putchar(*(format + 1));
				format++;
				
				break;
			}
		} else
		{
			printed_chars += _putchar(*format);
		}

		format++;
	}
	return (printed_chars);
}
