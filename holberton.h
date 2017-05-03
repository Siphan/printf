#include <stdarg.h>
int _printf(const char *format, ...);
int conversion(va_list args, char specifier);
int ccase(va_list args);
int putchr(char c);
int s_case(va_list args);
int putstr(char *str);
