#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-Entry Point
 *
 * Return: 0
*/
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}

	putchar('\n');
	
	return (0);
}
