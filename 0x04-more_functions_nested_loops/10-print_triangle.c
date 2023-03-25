#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return triangle of '#'s
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int q, k;

		for (q = 1; q <= size; q++)
		{
			for (k = q; k < size; k++)
			{
				_putchar(' ');
			}

			for (k = 1; k <= q; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
