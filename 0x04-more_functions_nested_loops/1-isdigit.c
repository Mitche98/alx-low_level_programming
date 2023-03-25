#include "main.h"

/**
 * _isdigit - function that checks 0 through 9 for a digit
 * @c: char to check
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
