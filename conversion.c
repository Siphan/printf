#include <stdarg.h>
#include "holberton.h"

/**
 * conversion - check the conversion specifiers
 * @args: the arguments passed to _printf
 * @specifier: the conversion specifier
 *
 * Return: the number of characters printed
 */
int conversion(va_list args, char specifier)
{
	int bytecount;

	bytecount = 0;

	switch (specifier)
	{
		case 'c':
			bytecount = ccase(args);
			break;

		case 's':
			bytecount = s_case(args);
			break;
	}

	return (bytecount);
}