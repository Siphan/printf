#ifndef HOLBERTON
#define HOLBERTON
#include <stdarg.h>
/*  * _printf - print to standard output one char at a time */
int _printf(const char *format, ...);

/* conversion - check the conversion specifiers */
int conversion(va_list args, char specifier);

/* ccase - handle the character conversion specifier */
int c_case(va_list args);

/* putchr - print a char to stdout */
int putchr(char c);

/* s_case - handle the string conversion specifier */
int s_case(va_list args);

/* putstr - print a string to stdout */
int putstr(char *str);

#endif /* HOLBERTON */
