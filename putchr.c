#include <unistd.h>

/**
 * putchr - print a char to stdout
 * @c: the char to print
 *
 * Return: the character written as an unsigned char cast to an int
 */
int putchr(char c)
{
	return (write(1, &c, 1));
}
