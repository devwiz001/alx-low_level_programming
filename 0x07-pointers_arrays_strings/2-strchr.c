#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locatesba string character
 * @s: a pointer
 * @c: charter tgat is located
 *
 * Return: A pointer
 * Null if it is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
