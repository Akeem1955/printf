#include "main.h"
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
	}
	len = (1 + baseHelper(base / mod, mod));
	_putchar((base % mod) + '0');
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
	}
	len = 1  + (hex_help(base / 16));
	if (base % 16 > 9)
	{
		_putchar((base % 16) + 55);
	} else
	{
		_putchar((base % 16) + '0');
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
	}
	len = 1  + (hex_help(base / 16));
	if (base % 16 > 9)
	{
		_putchar((base % 16) + 87);
	} else
	{
		_putchar((base % 16) + '0');
	}
	return (len);
}
