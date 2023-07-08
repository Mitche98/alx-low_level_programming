#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, otherwise 1
 */
int get_endianness(void)
{
	int end = 1;
	char *avian = (char *)&end;

	if (*avian == 1)
		return (1);

	return (0);
}
