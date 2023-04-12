#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - return length of string
 * @s: char type
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}

/**
 * _strdup - function returns a pointer to a new string
 * @str: string duplicate
 *
 * Return: pointer to duplicated string, NULL if insufficient
 */
char *_strdup(char *str)
{
	char *ptr;
	int size;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	ptr = malloc(size * sizeof(char));

	x = 0;
	while (x < size)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr[x] = str[x];
		x++;
	}
	return (ptr);
}
