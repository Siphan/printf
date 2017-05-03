#include <stdarg.h>
#include "holberton.h"

/**
 * s_case - handle the string conversion specifier
 * @args: the arguments passed to _printf
 *
 * Return: the number of characters printed
 */
int s_case(va_list args)
{
	int bytecount;
	char *str;

	bytecount = 0;
	str = va_arg(args, char *);

	if (!str)
	{
		putstr("(null)");
		return (0);
	}

	return (putstr(str));
}
