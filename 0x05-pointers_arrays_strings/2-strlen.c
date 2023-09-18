#include "main.h"
/**
 * _strlen - lenght of a string
 * @s: a pointer
 * Return: lenght of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')

	{
		length++;
		s++;
	}

	return (length);
}
