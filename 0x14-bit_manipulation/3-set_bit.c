#include "main.h"

/**
 * set_bit - sets value of bit at given index to 1
 * @n: pointer to bit
 * @index: index to set value at
 *
 * Return: -1 if error occurs, otherwise - 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
