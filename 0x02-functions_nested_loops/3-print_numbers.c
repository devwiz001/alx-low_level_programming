#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes a character to main.h
 * @c: the character to print
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_numbers - it prints the number 0 to 9 and then  new line
 */
void print_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		_putchar(num);
		_putchar('\n');
		num++;
	}
}
