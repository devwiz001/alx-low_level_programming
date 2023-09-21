#include "main.h"
#include <stddef.h>
/**
 * _strcmp - Compares
 * @s1: Pointer
 * @s2: Pointer
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

