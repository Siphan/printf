#include "holberton.h"

/**
 * d_case - handle integer conversion specifier.
 * @args: Pointer to list of variable length arguments.
 *
 * Return: bytes written to stdout.
 */
int d_case(va_list args)
{
  int i;
  int bytecount;

  bytecount = 0;
  i = va_arg(args, int);
  if (!i)
    {
      bytecount = putchr('0') - 1;
    }
  else
    {
      bytecount = putint(i);
    }

  return (bytecount);
}
