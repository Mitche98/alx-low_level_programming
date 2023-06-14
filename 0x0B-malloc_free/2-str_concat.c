#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two string
 * @s1: string to concat
 * @s2: string to concat
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	int c, d, rem1, rem2, rem;
	char *final;

	rem1 = rem2 = 0;

	if (s1 != NULL)
	{
		c = 0;
		while (s1[c++] != '\0')
			rem1++;
	}

	if (s2 != NULL)
	{
		c = 0;
		while (s2[c++] != '\0')
			rem2++;
	}

	rem = rem1 + rem2;
	final = (char *)malloc(sizeof(char) * (rem + 1));
	if (final == NULL)
		return (NULL);

	for (c = 0; c < rem1; c++)
		final[c] = s1[c];
	for (d = 0; d < rem2; d++, c++)
		final[c] = s2[d];
	final[rem] = '\0';

	return (final);
}
