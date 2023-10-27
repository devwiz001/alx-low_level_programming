#include "main.h"

/**
 * print_binary - this prints out the binary representation of a number.
 * @n: this is the number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
