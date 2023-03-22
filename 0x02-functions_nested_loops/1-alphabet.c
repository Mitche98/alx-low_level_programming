#include "main.h"

/**
 * print_alphabet - function that prints lowercase alphabet
 *
 *Return: 0
*/
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
