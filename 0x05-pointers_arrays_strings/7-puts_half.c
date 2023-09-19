#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: A pointer to the string to be printed.
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start;
	int i;

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2;
	}

	for (i = start; i < length; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}

