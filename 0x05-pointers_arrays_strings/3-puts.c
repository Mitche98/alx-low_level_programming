#include "main.h"

/**
 * _puts - function that prints a string followed by a new line, to stdout
 * @str: the string
 *
 * Return: length of string
 */
void _puts(char *str)
{
	int dgs = 0;

	while (str[dgs] != '\0')
	{
		_putchar(str[dgs]);
		dgs++;
	}
	_putchar('\n');
}
