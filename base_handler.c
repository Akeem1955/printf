#include "main.h"
/**
 * handle_base - print out formated string
 * @handle_base:string to be formated
 * Return: the length of the printed words
 */
int print_binary(int num)
{
    int printed_chars, base;

    base = num; /*va_arg(num, int);*/
    if (base < 0)
    {
        _putchar('*');
        return (-1);
    }
    printed_chars = baseHelper(base, 2);

    return (printed_chars);
}





/**
 * print_hex - Prints a representation of a decimal number on base16 lowercase
 * @list: List of the arguments passed to the function
 * Return: Number of characters printed
 */

int print_hex(va_list list)
{
    int num, len;

    num = (va_arg(list, int));
    if (num < 0)
    {
        return (-1);
    }

    len = hex_help(num);
    return (len);
}

/**
 * print_heX - Prints a representation of a decimal number on base16 Uppercase
 * @list: List of the arguments passed to the functiolist
 * Return: Number of characters printed
 */

int print_heX(va_list list){
    int num, len;
    num = (va_arg(list, int));
    if (num < 0)
    {
        return (-1);
    }

    len = hex_help(num);
    return (len);
}

/**
 * print_octal - Prints the numeric representation of a number in octal base
 * @list: List of all the arguments passed to the program
 * Return: Number of symbols printed to stdout
 */

int print_octal(va_list list)
{
    int printed_chars, base;

    base = va_arg(list, int);
    if (base < 0)
    {
        return (-1);
    }
    printed_chars = baseHelper(base, 8);

    return (printed_chars);
}
