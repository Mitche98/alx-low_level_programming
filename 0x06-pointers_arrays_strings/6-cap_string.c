#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @t: Input string
 *
 * Return: All caps string
 */
char *cap_string(char *t)
{
	int m = 0, f;
	char c[] = " \t\n.;.!?\"(){}";

	while (*(t + m))
	{
		if (*(t + m) >= 'a' && *(t + m) <= 'z')
		{
			if (m == 0)
				*(t + m) -= 'a' - 'A';
			else
			{
				for (f = 0; f <= 12; f++)
				{
					if (c[f] == *(t + m - 1))
						*(t + m) -= 'a' - 'A';
				}
			}
		}
		m++;
	}
	return (t);
}
