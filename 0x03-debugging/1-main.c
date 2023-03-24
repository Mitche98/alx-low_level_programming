#include "main.h"

/**
 * main - causing an Infinite Loop
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 1000; i++)
	{
		j = 1000;
		while (i >= j)
		{
			if (j != 0 && i == j)
			{
				printf("You did a good job");
			}
			else
				printf("Not so bad");
		}
		printf("\n");
	}
	return (0);
}
