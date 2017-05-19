#include <stdarg.h>
#include <stddef.h>
#include "holberton.h"

/**
 * s_case - handle the string conversion specifier
 * @args: pointer to list of variable length arguments
 * @dircnt: tracks the number of directives called
 *
 * Return: bytes writen to stdout (the number of characters printed)
 */
int s_case(va_list args, int dircnt)
{
  int bytecnt;
  char *str;

  bytecnt = 0;
  str = va_arg(args, char *);
  if (str == NULL)
    {
      bytecnt = putstr("(null)") - 1;
    }
  else
    {
      bytecnt = putstr(str);
      if (dircnt)
	{
	  bytecnt -= 1;
	}
    }

  return (bytecnt);
}
