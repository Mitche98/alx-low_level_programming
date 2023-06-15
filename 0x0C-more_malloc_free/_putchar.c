#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes char c to stdout
 * @c: char to print
 *
 * Return: On success 1, On error -1, errno set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
