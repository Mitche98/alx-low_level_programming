#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @n: int to extract last digit
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int a;

	a = (n % 10);

	if (a < 0)
	{
		a = (-1 * a);
	}
	_putchar(a + '0');
	return (a);
}
