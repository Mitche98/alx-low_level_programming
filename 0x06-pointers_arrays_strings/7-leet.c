#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @change: Input string
 *
 * Return: String converted
 */

char *leet(char *change)
{
	int help, j;
	char small[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char large[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char numb[] = {'4', '3', '0', '7', '1', '\0'};

	for (help = 0; change[help] != '\0'; ++help)
	{
		for (j = 0; j < 5; j++)
		{
			if (change[help] == small[j] || change[help] == large[j])
			{
				change[help] = numb[j];
			}
		}
	}
	return (change);
}
