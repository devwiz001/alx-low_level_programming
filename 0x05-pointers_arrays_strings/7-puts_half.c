#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - print 2nd half of a string then a newline
 * @str: a pointer
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start;

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2;
	}

	for (int i = start; i < length; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}

