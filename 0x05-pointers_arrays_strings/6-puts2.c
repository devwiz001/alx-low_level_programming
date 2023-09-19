#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints character of a sting then a new line
 * @str: pointer printing out string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
		if (str[i])
			i++;
	}

	putchar('\n');
}
