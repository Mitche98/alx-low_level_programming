#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * followed by a new line
 * @a: int to be cahecked
 * @n: int to be checked
 *
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int f;

	for (f = 0; f < n; f++)
	{
		if (f != n - 1)
		{
			printf("%d, ", a[f]);
		}
		else
		{
			printf("%d", a[f]);
		}
	}
	printf("\n");
}
