#include <unistd.h>

/**
 * _putchar - writes the character c to output
 * &c: the character to print 
 *
 * Return: success 1
 * On error, -1 is returened
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
