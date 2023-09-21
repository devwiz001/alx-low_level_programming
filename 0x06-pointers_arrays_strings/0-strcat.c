#include "main.h"
#include <stddef.h>

/**
 * _strcat - Concatenates
 * @dest: Pointer to the destination
 * @src: Pointer
 * Return: Pointer
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (result);
}

