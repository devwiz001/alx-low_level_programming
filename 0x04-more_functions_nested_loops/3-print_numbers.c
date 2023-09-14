#include "main.h"
/**
 * print_numbers - it prints the number 0 to 9 and then  new line
 */
void print_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
