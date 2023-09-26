#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - looks for a string
 * @s: a pointer
 * @accept: a pointer
 *
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (&s[a]);
			}
		}
	}

	return (NULL);
}

