#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - generates a key depending on username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int g, q;
	size_t fit, soft;
	char *t = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char c[7] = "     ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	fit = strlen(argv[1]);
	c[0] = 
}
