#include "main.h"
#include <stdio.h>
/**
 * sqrt_helper - functiom
 * @n: number
 * @guess: The current guesss for the square root
 *
 * Return: squarevroot of n
 * l square root
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (sqrt_helper(n, guess + 1));
}
/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number for which to calculate the square root
 *
 * Return: square root of n
 * l square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_helper(n, 1));
}
