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
	Format_map format_map[] = {
		{'c',print_char},
		{'s',print_string},
		{'d',print_num},
		{'i',print_num},
		{'u',print_unum},
		{'b',print_binary},
		{'o',print_octal},
		{'x',print_hex},
		{'X',print_heX},
		{'\0', (void *)0}
	};
	if (!(format))
	{
		return (-1);
	}
	va_start(arg_list, format);
	/* start formatting string */

	printed_chars = (handle_print(format, arg_list, format_map));
	va_end(arg_list);
	return (printed_chars);
}
