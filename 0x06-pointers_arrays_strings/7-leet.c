#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into "1337".
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char *p = str;

	while (*p)
	{
		int i;

		for (i = 0; i < 10; i++)
		{
			if (*p == "aAeEoOtTlL"[i])
			{
				*p = "4433007711"[i];
				break;
			}
		}
		p++;
	}
	return (str);

}
