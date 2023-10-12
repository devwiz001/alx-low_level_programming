#include <stdio.h>
/**
 * main - starting of tge code
 * @argc: argument count
 * @argv: argument vector
 * @i: a funtion
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
