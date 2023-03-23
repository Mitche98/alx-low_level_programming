#include "main.h"

/**
 * print_sign - function prints sign of number
 * @n: int to check
 *
 * Return: 1 and print + if n > zero
 * 0 and print 0 if n < 0
 * -1 and print - if n < zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
