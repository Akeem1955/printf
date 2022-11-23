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

    len = _printf(NULL);
    len2 = printf("lets try to printf");
    printf("%d:%d",len,len2);
    printf("----------------------------------------");
    return (0);
}
