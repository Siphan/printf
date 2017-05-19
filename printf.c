#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - print to standard output one char at a time
 * @format: a character string. The format string is composed of
 * zero or more directives.
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings).
 */
int _printf(const char *format, ...)
{
  long int len, bytecnt, dircnt;
  va_list args;

  dircnt = 0;
  bytecnt = 0;
  if (format)
    {
      va_start(args, format);
    }
  else
    {
      return (-1);
    }
  for (len = 0; format[len] != '\0'; len++)
    {
      if (format[len] != '%')
	{
	  putchr(format[len]);
	}
      else
	{
	  len++;
	  if (!format[len])
	    {
	      return (-1);
	    }
	  dircnt++;
	  bytecnt += conversion(args, format[len], dircnt);
	}
    }
  va_end(args);
  if (dircnt > 0)
    len -= dircnt;
  len += bytecnt;
  return (len);
}
