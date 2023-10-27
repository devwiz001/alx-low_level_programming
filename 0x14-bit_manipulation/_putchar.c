#include <unistd.h>

/**
 * _putchar - this will write the character c to stdout
 * @c: this is the character to print
 *
 * Return: 1 (always successful).
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
