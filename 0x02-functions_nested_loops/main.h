#include <unistd.h>
/**
 * _putchar - Trial for the first time
 *
 * Return: On success 1
 *
*/
int _putchar(char c)
{
	return(write(1, &c, 1));
}
