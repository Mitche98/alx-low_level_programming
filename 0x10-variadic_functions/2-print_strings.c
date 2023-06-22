#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints string followed by a new line
 * @seperator: string to be printed between strings
 * @n: number of strings passed to function
 * @...: variable number of strings
 *
 * Return: NULL if not printed, (nil) is printed otherwise
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list strings;
	char *bec;
	unsigned int tribe;

	va_start(strings, n);

	for (tribe = 0; tribe < n; tribe++)
	{
		bec = va_arg(strings, char *);

		if (bec == NULL)
			printf("(nil)");
		else
			printf("%s", bec);

		if (tribe != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}

	printf("\n");

	va_end(strings);
}
