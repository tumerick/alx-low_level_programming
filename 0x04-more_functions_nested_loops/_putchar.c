#include <unistd.h>

/**
 * _putchar - writes the passed char value to stdout
 * @c: the character to print
 * 
 * Return: 1 (Success)
 * On error, -1 is returned.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
