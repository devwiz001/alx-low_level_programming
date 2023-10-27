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
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
		count += (diff & 1); /* Check the least significant bit */
		diff >>= 1; /* Right shift to the next bit */
	}

	return (count);
}
