#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf("%c", '\0');
    len2 = printf("%c", '\0');
    printf("\n%d:%d",len,len2);
    printf("----------------------------------------");
    return (0);
}
