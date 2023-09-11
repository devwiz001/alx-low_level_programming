#include <stdio.h>
/**
 * main - this is main funtion of myprogram
 * Return: 0 (successful output)
 */
int main(void)
{
	char lowerAlpha;

	lowerAlpha = 'z';
	while (lowerAlpha >= 'a')
	{
		putchar(lowerAlpha);
		lowerAlpha--;
	}
	putchar(10);
	return (0);
}

