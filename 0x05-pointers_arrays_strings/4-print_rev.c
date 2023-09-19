#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse form folowed by new line
 * @s: a pointer to string
 */
void print_rev(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}

	for (int i = lenght - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
