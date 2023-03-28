#include "main.h"

/**
 * puts_half - function that prints half of a string
 * followed by a new line
 * @str: char to check
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int low = 0, r;

	while (str[low] != '\0')
		low++;
	if (low + 1 % 2 != '\0')
	{
		r = (low - 1) / 2;
	}
	else
	{
		r = (low / 2);
	}
	r++;

	for (low = r; str[low] != '\0'; low++)
	{
		_putchar(str[low]);
	}
	_putchar('\n');
}
