#include "main.h"
/**
 * primeFinder - searches for if a number is prime
 *
 * @a: number to check
 * @b: numbers we will go through
 *
 * Return: if a prime number or else
 */
int primeFinder(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		primeFinder(a, b + 1);

	return (1);
}

/**
 * is_prime_number - tells if an int is a prime number or not
 * @n: number to check
 *
 * Return: 0 if number is not prime, 1 if prime
 */

int is_prime_number(int n)
{
	return (primeFinder(n, 2));
}
