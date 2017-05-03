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
	int len;
	int bytecount = 0;
	/* int i = 0; */
	va_list args; /* va_list type is a "pointer" */

	if (!format)
	{
		return (-1);
	}

	va_start(args, format);

	for (len = 0; format[len] != '\0'; len++)
	{
		if (format[len] != '%')
		{
			bytecount += putchr(format[len]);
		}
		else
		{
			len++;
			bytecount += conversion(args, format[len]);
		}
	}
	va_end(args);

	return (bytecount);
}
