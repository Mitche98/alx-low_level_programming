#include <stdio.h>

/**
 * myFunc - function executed before main
 *
 * Return: void
 */
void __attribute__((constructor)) myFunc()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
