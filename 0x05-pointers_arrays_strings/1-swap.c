#include "main.h"

/**
 * swap_int - swaps value of two integers
 * @a: integer to be swapped
 * @b: second integer to be swapped
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int swap;
	
	swap = *a;

	*a = *b;

	*b = swap;
}
