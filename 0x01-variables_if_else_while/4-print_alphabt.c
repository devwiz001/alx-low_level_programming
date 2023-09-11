#include <stdio.h>
/**
 * main - to print alphabet with putcher
 * Return: 0(succesful)
 */
int main(void)
{
	char lowerCase;

	lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		if (lowerCase == 'q' || lowerCase == 'e')
		{
			lowerCase++;
			continue;
		}
		putchar(lowerCase);
		lowerCase++;
	}
	putchar(10);
	return (0);
}
