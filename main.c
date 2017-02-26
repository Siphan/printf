#include <stdio.h>
#include "holberton.h"

/**
 * main is a temporary test program to test our WIP _printf.
 */
int main(void)
{
  char c = 'a';
  int ret = printf("Test %c\n", c);
  int ret2 = _printf("Test %c\n", c);

  printf("%d\n", ret);
  printf("%d\n", ret2);

  return (0);
}
