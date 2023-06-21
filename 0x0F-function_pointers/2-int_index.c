#include "function_pointers.h"

/**
 * int_index - return index place if true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to function
 *
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int d = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (d < size)
			{
				if (cmp(array[d]))
					return (d);

				d++;
			}
		}
	}

	return (-1);
}
