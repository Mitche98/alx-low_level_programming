#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 *
 * @a: Input array
 * @n: position of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i, test;

	test = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		int top, bot;

		top = a[i];
		bot = a[test];
		a[i] = bot;
		a[test] = top;
		test--;
	}
}
