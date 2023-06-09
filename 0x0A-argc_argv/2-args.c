#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int r;

	for (r = 0; r < argc; r++)
	{
		printf("%s\n", argv[r]);
	}

	return (0);
}
