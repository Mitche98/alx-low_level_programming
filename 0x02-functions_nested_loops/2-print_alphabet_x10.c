#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: 0
*/
void print_alphabet_x10(void)
{
	int n, n1;

	n1 = 0;

	while (n1 < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		n1++;
		_putchar('\n');
	}
}
