#include "main.h"
/**
 * _strlen - return length of a string
 * @str: string
 * Return: length of string
 */

int _strlen(char *str)
{
	int n;

	n = 0;
	while (*str)
	{
		str++;
		n++;
	}
	return (n);
}
