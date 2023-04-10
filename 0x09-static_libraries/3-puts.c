#include "main.h"

/**
 * _puts - function prints out lenght of a string and returns
 * @str: the string
 *
 * Return: length of the string
 */
void _puts(char *str)
{
	int again = 0;

	while (str[again] != '\0')
	{
		_putchar(str[again]);
		again++;
	}
	_putchar('\n');
}
