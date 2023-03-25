#include "main.h"

/**
 * more_numbers - function that prints 10 times the number from 0 to 14
 *
 */

void more_numbers(void)
{
	int b, k;

	for (b = 1; b <= 10; b++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
				_putchar('1');
			_putchar (k % 10 + '0');
		}
		_putchar('\n');
	}
}
