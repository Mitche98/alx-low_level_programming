#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes char to stdout
 * @c: char to write
 *
 * Return: on success 1, on error -1
 * otherwise errno not set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
