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
	int i, j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
		}

		if (found == 0)
		{
			return (count);
		}
	}

	return (count);
}

