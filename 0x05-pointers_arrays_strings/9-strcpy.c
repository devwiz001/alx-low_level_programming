#include "main.h"
/**
 * _strcpy - Copies a string from src 
 * @dest: A pointer 
 * @src: A pointer 
 *
 * Return: A pointer to the destination dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return dest;
}

