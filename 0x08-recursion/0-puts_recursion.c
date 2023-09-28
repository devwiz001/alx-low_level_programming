#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - it prints a string followed by newline
 * @s: this is the string thst is to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
