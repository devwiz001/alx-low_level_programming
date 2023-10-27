#include "main.h"

/**
 * get_bit -this will get the value of a bit at a given index.
 * @n:this is going to be the number to retrieve the bit from.
 * @index: this is the index of the bit, it starts from 0.
 *
 * Return: The value of the bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}

