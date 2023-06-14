#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars and initializes
 * it with a specific char
 * @c: char to initialize
 * @size: number of bytes to allocate
 *
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
