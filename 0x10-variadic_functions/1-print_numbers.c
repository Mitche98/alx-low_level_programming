#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by new line
 * @seperator: string to be printed
 * @n: number of integers
 * @...: variable number to be printed
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list gain;
	unsigned int index;

	va_start(gain, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(gain, int));

		if (index != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}

	printf("\n");

	va_end(gain);
}
