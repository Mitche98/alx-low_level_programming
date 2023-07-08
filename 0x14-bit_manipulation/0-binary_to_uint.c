#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: Binary
 *
 * Return: converted number, otherwise 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ok;
	int len, base2;

	if (!b)
		return (0);

	ok = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base2 = 1; len >= 0; len--, base2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ok += base2;
		}
	}

	return (ok);
}
