#include <stdarg.h>
#include "holberton.h"

/**
 * ccase - handle the character conversion specifier
 * @args: the arguments passed to _printf
 *
 * Return: the number of characters printed
 */
int ccase(va_list args)
{
	int i;

	i = va_arg(args, int);

	if (i == 0)
	{
		return (1);
	}

	return (putchr(i));
}
