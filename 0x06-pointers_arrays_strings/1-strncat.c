#include "main.h"
#include <stddef.h>

/**
 * _strncat - Concatenates two strings
 * @dest: Pointer
 * @src: Pointer
 * @n: Maximum number of bytes to concatenate
 * Return: Pointer 
 */
char *_strncat(char *dest, char *src, int n)
{
    char *result = dest;

    while (*dest)
    {
        dest++;
    }

    while (*src && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0';

    return result;
}

