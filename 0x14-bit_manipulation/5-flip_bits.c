#include "main.h"

/**
 * flip_bits - counts number of bits needed to be flipped
 * to get from one number to another
 * @n: the number
 * @m: number to flip n to
 *
 * Return: necessary number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m, bit = 0;

	while (XOR > 0)
	{
		bit += (XOR & 1);
		XOR >>= 1;
	}

	return (bit);
}
