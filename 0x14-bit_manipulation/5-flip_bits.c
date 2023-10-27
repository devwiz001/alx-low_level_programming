#include "main.h"

/**
 * flip_bits - this returns the number of bits to flip to get from n to m.
 * @n: this the first number.
 * @m: this the second number.
 *
 * Return: returns the number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			countbit++;
	}

	return (countbit);
}
