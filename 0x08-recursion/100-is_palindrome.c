#include "main.h"
/**
 * _strlen_recursion - prints length of string
 * @s: string to print
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * pal_checker - checks if *s is a palindrome
 * @s: base address of string
 *
 * Return: 1 if s is palindrome, otherwise 0
 */
int pal_checker(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
		return (0);

	return (1);
}

/**
 * is_palindrome - checks for palindrome
 * @s: string address
 *
 * Return: if n = prime (1), n != prime (0)
 */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (0);
	return (pal_checker(s));
}
