#include "main.h"
#include <stdio.h>

/**
 * _memset - function that fills first n bytes of the memory area
 * @s: returns pointer to memory area
 * @b: constant byte
 * @n: number of bytes to fill
 *
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
