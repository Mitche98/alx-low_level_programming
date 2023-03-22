#include "main.h"

/**
 * main-Entry point
 *
 * _islower - function that checks for lowercase
 * 
 * Return: 1 if int c is lowercase, else 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
