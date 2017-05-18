#include "holberton.h"

/**
 * putstr - print a string to stdout
 * @str: the string to print
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int putstr(char *str)
{
	int i;

	int bytecount;

	bytecount = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchr(str[i]);
		bytecount += 1;
	}

	return (bytecount);
}
