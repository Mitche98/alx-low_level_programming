#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of time the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int y, k;

		for (y = 0; y < n; y++)
		{
			for (k = 0; k < n; k++)
			{
				if (k == y)
					_putchar('\\');
				else if (k < y)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}	
