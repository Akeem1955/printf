#include "main.h"
/**
 * print_string - print a string
 * @list: str to print
 * Return:length of str
 */

int print_string(va_list list)
{
	int i;
	char *p;

	p = va_arg(list, char*);

	if (!(p))
	{
		p = "(null)";
	}
	for (i = 0; *(p + i); i++)
	{
		_putchar(*(p + i));
	}
	return (i);
}

/**
 * print_char - print a char
 * @list:char to be printed
 * Return:1
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
/**
 * print_percent - print a char
 * @format:char to be printed
 * @n:check for true
 * Return:1
 */
int print_percent(const char *format, int n)
{
	if (n == 0)
	{
		_putchar(*format);
	} else
	{
		_putchar(*format);
		_putchar(*(format + 1));
		return (2);
	}
	return (1);
}



