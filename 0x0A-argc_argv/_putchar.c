#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes char to stdout
 * @c: char to print
 *
 * Return: 1 on success, on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
