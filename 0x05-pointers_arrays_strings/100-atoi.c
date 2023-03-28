#include "main.h"

/**
 * _atoi - function that converts a string to an integer
 * @s: the pointer to convert
 *
 * Return: An Integer
 */

int _atoi(char *s)
{
	int j = 0;
	unsigned int li = 0;
	int imo = 1;
	int omi = 0;

	while (s[j])
	{
		if (s[j] == 45)
		{
			imo *= -1;
		}

		while (s[j] >= 48 && s[j] <= 57)
		{
			omi = 1;
			li = (li * 10) + ([j] - '0');
			j++;
		}

		if (omi == 1)
		{
			break;
		}
		j++;
	}
	li *= imo;
	return (li);
}
