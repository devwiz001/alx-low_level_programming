#include "main.h"
#include <stdio.h>
/**
 * _memset - contant memset
 * @s: a pointer
 * @b: a constant
 * @n: number
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	for (unsigned int i = 0; i < n; i++)

	{

		*ptr = b;
		ptr++;
	}

	return (s);
}
