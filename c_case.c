#include <stdarg.h>
#include "holberton.h"

/**
 * c_case - handle the character conversion specifier
 * @args: pointer to list of variable length arguments
 *
 * Return: the number of characters printed
 */
int c_case(va_list args)
{
	int i;

	i = va_arg(args, int);

	if (i == 0)
	{
		return (1);
	}

	return (putchr(i));
}
