#include <stdio.h>

/**
 * print_diagsums - Prints the sum
 * @a: A pointer
 * @size: The size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int sum_diag1 = 0;
	int sum_diag2 = 0;
	int i;

	for (int i = 0; i < size; i++)
	{
		sum_diag1 += a[i * size + i];
		sum_diag2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2);
}
