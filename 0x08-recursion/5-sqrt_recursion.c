#include "main.h"
/**
 * test - finds sqrt of two numbers
 *
 * @a: the number
 * @b: number to test sqrt of @a
 *
 * Return: square root
 */
int test(int a, int b)
{
	if (b * b > a)
		return (-1);
	else if (b * b == a)
		return (b);
	else
		return (test(a, b + 1));

	return (1);
}

/**
 * _sqrt_recursion - returns natural sqrt of a number
 * @n: the number to return sqrt of
 *
 * Return: sqrt of @n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (test(n, 1));
}
