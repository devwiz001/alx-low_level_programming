#include "main.h"

/**
 * set_bit - this is going to set the value of a bit to 1 at a given index.
 * @n: this is a pointer to the number to modify.
 * @index: this an index of the bit to set, starting from 0.
 *
 * Return: 1 if it successful, or -1 if something else happen
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8)) /* Check if index is out of range */
		return (-1);

	*n = *n | (1UL << index); /* Set the bit at the specified index to 1 */

	return (1);
}

