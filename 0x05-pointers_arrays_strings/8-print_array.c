#include <stdio.h>

/**
 * print_array - Prints n elements of an array
 * @a: A pointer to the aray
 * @n: The number of elements
 */
void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}

