#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring in a string
 * @haystack: A pointer
 * @needle: a pointer
 *
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
		}

		if (needle[b] == '\0')
		{
			return (&haystack[a]);
		}
	}

	return (NULL);
}

