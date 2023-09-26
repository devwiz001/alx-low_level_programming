#include "main.h"

/**
 * _strspn - Gets the length
 * @s: A pointer
 * @accept: A pointer
 *
 * Return: The number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int a, b;
	int got;

	for (a = 0; s[a] != '\0'; a++)
	{
		got = 0;

		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				count++;
				got = 1;
				break;
			}
		}

		if (got == 0)
		{
			return (count);
		}
	}

	return (count);
}

