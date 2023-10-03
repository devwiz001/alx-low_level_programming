#include <stdio.h>
/**
 * main - to print it name
 * @argc: arg componet
 * @argv: arg vector
 * Return: 0 (sucessful)
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
