#include "main.h"
#include <stdio.h>

/**
 * main - function that prints numbers from 1 to 100, followed
 * by a new line
 * Return: 0
 *
 */

int main(void)
{
	int e;

	for (e = 1; e <= 100; e++)
	{
		if (e % 3 == 0 && e % 5 != 0)
		{
			printf("Fizz");
		}
		else if (e % 5 == 0 && e % 3 != 0)
		{
			printf("Buzz");
		}
		else if (e % 3 == 0 && e % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (e == 1)
		{
			printf("%d", e);
		}
		else
		{
			printf("%d", e);
		}
	}
	printf("\n");

	return (0);
}

