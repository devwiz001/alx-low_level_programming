#include <stdio.h>

/**
 * _puts - this is a function to print a string
 * @str: the input string to print
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

/**
 * main - the entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
