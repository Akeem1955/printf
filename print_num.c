#include "main.h"
/**
 * print_num - prints a number send to this function
 * @args: List of arguments
 * Return: The number of arguments printed
 */
int print_num(va_list args)
{
	int div;
	int len;
	unsigned int num;
	int n;

	n  = va_arg(args, int);
	div = 1;
	len = 0;
	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	} else
	{
		num = n;
	}

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
/**
 * print_unum - Prints an unsigned number
 * @n: unsigned integer to be printed
 * Return: The amount of numbers printed
 */
int print_unum(va_list n)
{
	int div;
	int len;
	unsigned int num;

	num = va_arg(n, int);
	div = 1;
	len = 0;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
