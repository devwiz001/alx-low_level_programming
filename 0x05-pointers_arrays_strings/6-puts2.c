#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints character of a sting then a new line
 * @str: pointer printing out string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
	       i += 2;
	}

putchar('\n');
}
