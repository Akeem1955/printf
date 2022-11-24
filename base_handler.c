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
 * baseHelper - Prints a representation of a decimal number on base16 Uppercase
 * @base: number to be converted
 * @mod:base level
 * Return: Number of characters printed
 */

int baseHelper(int base, int mod)
{
    int len;

    if (base <= 1)
    {
        _putchar(base + '0');
        return (1);
    } else
    {
        len = (1 + baseHelper(base / mod, mod));
        _putchar((base % mod) + '0');
    }
    return (len);
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
 * hex_help - Prints a representation of a decimal number on base16 Uppercase
 * @base: number to be converted
 * Return: Number of characters printed
 */

int hex_help(int base)
{
    int len;

     if (base <= 1)
    {
        _putchar(base + '0');
        return (1);
    } else
    {
        len = 1  + (hex_help(base / 16));
        if (base % 16 > 9)
        {
             _putchar((base % 16) + 55);
        } else
        {
            _putchar((base % 16) + '0');
        }
    }
    return (len);
}

/**
 * heX_help - Prints a representation of a decimal number on base16 Uppercase
 * @base: number to be converted
 * Return: Number of characters printed
 */

int heX_help(int base)
{
    int len;

    if (base <= 1)
    {
        _putchar(base + '0');
        return (1);
    } else
    {
        len = 1  + (hex_help(base / 16));
        if (base % 16 > 9)
        {
             _putchar((base % 16) + 87);
        } else
        {
            _putchar((base % 16) + '0');
        }
    }
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
