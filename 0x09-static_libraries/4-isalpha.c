#include "main.h"
/**
 * _isalpha - checks alphabetic char
 * @c: char to check
 *
 * Return: 1 if c is letter, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
