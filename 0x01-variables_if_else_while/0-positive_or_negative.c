/*
 *File: 0-positive_or_negative.c
 *Auth: Jeremiah Omokaro
 *
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated numbero 
 *
 * Return: Always 0
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
