#include "main.h"

/**
 * _memset - fill a patictular block of memeory with a value
 * @s: starting the adddress of memory to be filled
 * @b: the value
 * @n: number of bytes that will change
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)

{

	int i = 0;


	for (; n > 0; i++)

	{

		s[i] = b;

		n--;

	}

	return (s);

}
