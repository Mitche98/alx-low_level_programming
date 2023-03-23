#include "main.h"

/**
 * times_table - function that prints times table
 * starting with zero
 *
 */
void times_table(void)
{
	int b, i, g;

	for (b = 0; b < 10; b++)
	{
		for (i = 0; i < 10; i++)
		{
			g = i * b;
			if (i == 0)
			{
				_putchar(g + '0');
			}
			if (g < 10 && i != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(g + '0');
			}
			else if (g >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((g / 10) + '0');
				_putchar((g % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
