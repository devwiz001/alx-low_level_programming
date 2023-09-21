#include "main.h"
#include <stddef.h>
/**
 * _strncpy - Copies a string
 * @dest: Pointer
 * @src: Pointer
 * @n: number
 *  Return: result
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (n > 0 && (*dest++ = *src++))
		n--;

	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}

	return (result);
}

