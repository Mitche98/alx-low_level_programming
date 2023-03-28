#include "main.h"

/**
 * _strlen-function that returns the length of a string
 * @s: char to check
 *
 * Return: Always 0
*/

int _strlen(char *s)
{
	int a = 0; /* start counting from 0 */

	for (; *s++;)
		a++;
	return (a);
}
