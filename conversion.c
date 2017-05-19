#include <stdarg.h>
#include "holberton.h"

/**
 * conversion - check the conversion specifiers
 * @args: pointer to list of variable length arguments
 * @specifier: the conversion specifier
 * @dircnt: tracks the number of directives called
 *
 * Return: the number of characters printed
 */
int conversion(va_list args, char specifier, int dircnt)
{
  int bytecount;

  bytecount = 0;

  switch (specifier)
    {
    case 'c':
      bytecount = c_case(args);
      break;

    case 's':
      bytecount = s_case(args, dircnt);
      break;

    case 'd':
      bytecount = d_case(args);
      break;

    case 'i':
      bytecount = i_case(args);
      break;

    case '%':
      putchr('%');
      break;

    default:
      putchr('%');
      bytecount++;
      putchr(specifier);
    }

  return (bytecount);
}
