#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _printf prints to standard output one char at a time
 * For now it only handles the 'c' format specifier
 */
int _printf(const char *format, ...)
{
  int len;
  int count = 0;
  int i = 0;
  va_list args; /* va_list type is a "pointer" */

  va_start(args, format);
  for(len = 0; format[len] != '\0'; len++)
  {
    if(format[len] != '%')
    {
      putchar(format[len]);
    }
    else
    {
      len++;
      count ++;
      switch (format[len])
      {
        case 'c':
          i = va_arg(args, int);
          putchar(i);
          break;
      }
    }
  }
  va_end(args);

  if (count > 0)
  {
    return (len - count);
  }
  else
  {
    return (len);
  }
}
