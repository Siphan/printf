#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);

int main(void)
{
  char c = 'a';
  int ret = printf("Test %c\n", c);
  int ret2 = _printf("Test %c\n", c);

  printf("%d\n", ret);
  printf("%d\n", ret2);

  return (0);
}

int _printf(const char *format, ...)
{
  int len;
  int count;
  int i;
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
      count++;
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
