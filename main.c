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

    len = _printf("%");
    len2 = printf("\nlets try to printf");
    printf("%d:%d",len,len2);
    printf("----------------------------------------");
    return (0);
}
