#include "main.h"
#include <stdio.h>
/**
 * factorial - Calculates the factorial of a numbers
 * @n: The number which is used to calculate factorial
 *
 * Return: The factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
