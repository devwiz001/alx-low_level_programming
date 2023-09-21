#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings
 * @dest: Pointer
 * @src: Pointer
 * @n: Maximum number of bytes to concatenate
 * Return: Pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

