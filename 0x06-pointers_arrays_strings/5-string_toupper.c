#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters to uppercase
 *
 * @j: string
 *
 * Return: char
 */
char *string_toupper(char *j)
{
	int b;

	b = 0;

	while (*(j + b))
	{
		if (*(j + b) >= 'a' && *(j + b) <= 'z')
			*(j + b) -= 'a' - 'A';
		b++;
	}
	return (j);
}
