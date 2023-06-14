#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - creates two dimensional array of ints
 * @width: width
 * @height: height
 *
 * Return: pointer to created matrix or NULL
 */
int **alloc_grid(int width, int height)
{
	int **array, n, x;
	int try = width * height;

	if (try <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		array[n] = (int *)malloc(sizeof(int) * width);
		if (array[n] == NULL)
		{
			for (n--; n >= 0; n--)
				free(array[n]);
			free(array);
			return (NULL);
		}
	}

	for (n = 0; n < height; n++)
		for (x = 0; x < width; x++)
			array[n][x] = 0;

	return (array);
}
