#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: string to work with
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	int red;

	for (red = 0; str[red] != '\0'; red++)
	{
		if (red % 2 == 0)
			_putchar(str[red]);
	}
	_putchar('\n');
}
