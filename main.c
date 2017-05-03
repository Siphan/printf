#include <stdio.h>
#include <limits.h>
#include "holberton.h"

int main(void)
{
        int len, len2;

        len = _printf("Let's try to printf a simple sentence.\n");
        len2 = printf("Let's try to printf a simple sentence.\n");

        printf("My printf length:[%d]\n", len);
        printf("Original printf length:[%d]\n", len2);

        return (0);
}
