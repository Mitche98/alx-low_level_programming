#include "main.h"
/**
 * _memcpy - function that copies bytes from memory area
 * @src: memory area
 * @dest: Returns pointer to dest
 * @n: number of bytes
 *
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
