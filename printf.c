#include "main.h"
#include<unistd.h>
#include<stdarg.h>
/**
 * _printf - print out formated string
 * @format: string to format
 * Return: length of string
 */
int _printf(const char *format, ...)
{
	char c, *p;

	int n, N;

	va_list params;

	N = 0, n = 0;
	va_start(params, format);
	while (*format)
	{
		if (*(format) == '%')
		{
			switch (*(format + 1))
			{
			case 's':
				p = va_arg(params, char*);
				n = _strlen(p);
				write(1, p, n);
				format++;
				n--;
				N += n;
				break;
			case 'c':
				c = va_arg(params, int);
				write(1, &c, 1);
				format++;
				break;
			default:
				break;
			}
		} else
		{
			write(1, format, 1);
		}
		format++;
		N++;
	}
	va_end(params);
	return (N);
}
