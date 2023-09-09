#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - void 
 * Return: 0 (always successful)
 */
int main(void)
{
	int n;

	int w;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	w = n % 10;
	if (w > 5)
		printf("Last difit of %d is %d and is greater thanb 5\n", n, w);
	if (w == 0)
		printf("Last digitof %d id %d nd is less than 6 and not 0\n", n, w);
	return (0);
}
