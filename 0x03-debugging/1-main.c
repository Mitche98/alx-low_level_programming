#include "main.h"

/**
 * main - causing an Infinite Loop
 *
 * Return: 0
 */
int main(void)
{
	int i;

	printf("Causing an infinite loop \n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("Want to see this work! \\o/\n");

	return (0);
}
