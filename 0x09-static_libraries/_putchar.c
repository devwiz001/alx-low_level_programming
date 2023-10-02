#include <unistd.h>
/**
 * _putchar - it writes the c character to stdout
 * @c: character to print
 * Return: always successful (1)
 */

int _putchar(char c)

{

	return (write(1, &c, 1));

}
