#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates char in a string
 * @s: the string
 * @c: char
 *
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
