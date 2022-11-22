#ifndef MAIN_H
#define MAIN_H

#include<unistd.h>
#include<stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list str);
int print_char(va_list str);
#endif
