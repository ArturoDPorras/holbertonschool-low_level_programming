#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The char to print
 *
 * Return: Always c.
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (c);
}
