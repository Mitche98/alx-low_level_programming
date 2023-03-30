#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: string to append to
 * @src: string to append from
 *
 * Return: to dest 
 */
char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (i);
}
