#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored
 *
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *eve;
	int d, again;

	if (min > max)
		return (NULL);

	again = max - min + 1;

	eve = malloc(sizeof(int) * again);

	if (eve == NULL)
		return (NULL);

	for (d = 0; min <= max; d++)
		eve[d] = min++;

	return (eve);
}
