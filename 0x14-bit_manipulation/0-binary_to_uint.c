#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - this will convert a binary string to an unsigned int.
 * @b: this is the binary string to convert.
 *
 * Return: this will return the converted unsigned int, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			result <<= 1;
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}

