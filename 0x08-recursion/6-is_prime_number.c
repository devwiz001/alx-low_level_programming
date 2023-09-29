#include "main.h"
#include <stdio.h>
/**
 * is_prime_helper - Helper function
 * @n: The number to check for prime
 * @divisor: The current divisor
 *
 * Return: 1 if n is prime, returns 0 if it not
 */
int is_prime_helper(int n, int divisor)
{
	    if (n <= 1)
		            return (0);

	        if (divisor == 1)
			        return (1);

		    if (n % divisor == 0)
			            return (0);

		        return (is_prime_helper(n, divisor - 1));
}

/**
 * is_prime_number - Checks if a nunber is a prime
 * @n: The integer to check
 *
 * Return: 1 if n is prime, returns 0 if its not
 */
int is_prime_number(int n)
{
	    return (is_prime_helper(n, n - 1));
}
