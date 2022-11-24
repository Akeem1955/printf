#ifndef MAIN_H
#define MAIN_H

#include<unistd.h>
#include<stdarg.h>



typedef struct format_map
{
    char specifier;
    int (*handle_specifier)(va_list);
}Format_map;

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list list);
int print_char(va_list list);
int handle_print(const char *format, va_list placeholder_list, Format_map map[]);
int print_num(va_list num);
int handle_base(va_list base);
int print_octal(va_list list);
int print_heX(va_list list);
int print_hex(va_list list);
int print_binary(int num);
int baseHelper(int base, int mod);
int heX_help(int base);
int hex_help(int base);
int print_percent(const char *format, int n);
int print_unum(va_list n);
#endif
