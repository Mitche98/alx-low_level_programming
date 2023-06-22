#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints all arguments when specified
 * @format: specifies necessary operation
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int c;
	va_list prnt;
	char *b, *total;

	va_start(prnt, format);

	total = "";

	c = 0;
	while (format && format[c])
	{
		switch (format[c])
		{
			case 'c':
				printf("%s%c", total, va_arg(prnt, int));
				break;
			case 'i':
				printf("%s%d", total, va_arg(prnt, int));
				break;
			case 'f':
				printf("%s%f", total, va_arg(prnt, double));
				break;
			case 's':
				b = va_arg(prnt, char *);
				if (b == NULL)
					b = "(nil)";
				printf("%s%s", total, b);
				break;
			default:
				c++;
				continue;
		}
		total = ", ";
		c++;
	}

	printf("\n");
	va_end(prnt);
}
