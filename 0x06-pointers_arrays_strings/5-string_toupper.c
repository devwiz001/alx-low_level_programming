#include "main.h"
#include <stddef.h>
/**
 * string_toupper - Changes all lowercase letter
 * @str: Pointer.
 * Return: Pointer
 */
char *string_toupper(char *str)
{
	char *result = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}

	return (result);
}

