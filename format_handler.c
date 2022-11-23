#include "main.h"
/**
 * print_string - print a string
 * @str: str to print
 * Return:length of str
 */

int print_string(va_list str)
{
	int i;
	char *p;

	p = va_arg(str, char*);

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
 * @str:char to be printed
 * Return:1
 */

int print_char(va_list str)
{
	_putchar(va_arg(str, int));
	return (1);
}


