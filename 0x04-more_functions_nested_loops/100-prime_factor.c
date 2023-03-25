#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the
 * number 612852475143 followed by a new line
 * Return: 0
 */

int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;

	for (n = 1; n <= max; n++)
	{
		if (n % max == 0)
		{
			if (max == n)
			{
				printf("%ld\n", n);
				break;
			}
			i = max / n;
			max = i;
			n = 1;
		}
	}
	return (0);
}
