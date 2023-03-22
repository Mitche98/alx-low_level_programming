#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: 0
*/
void print_alphabet_x10(void)
{
	int n;

	for (n = 'a' * 10; n <= 'z' * 10; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
