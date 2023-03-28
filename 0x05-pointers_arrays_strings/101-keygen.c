#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function that generates random passwords for 101-keygen
 *
 * Return: Always 0
 */

int main(void)
{
	int r, a, c, e;
	char y[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[58];

	srand(time(NULL));
	while (e != 2772)
	{
		r = c = e = 0;
		while ((2772 - 122) > e)
		{
			a = rand() % 62;
			p[r] = y[a];
			e += y[a];
			r++;
		}
		while (y[c])
		{
			if (y[c] == (2772 - e))
			{
				p[r] = y[c];
				e += y[c];
				r++;
				break;
			}
			c++;
		}
	}
	p[r] = '\0';
	printf("%s", p);
	return (0);
}
