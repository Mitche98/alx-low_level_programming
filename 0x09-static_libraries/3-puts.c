#include "main.h"

/**
 * _puts - prints out the length of a string and returns
 * @str: the string
 *
 * Return: the length of the string
 */
void _puts(char *str)
{
	int top = 0;

	while (str[top] != '\0')
	{
		_putchar(str[top]);
		top++;
	}
	_putchar('\n');
}
