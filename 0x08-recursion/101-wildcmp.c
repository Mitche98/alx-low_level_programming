#include "main.h"
int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 * strlen_no_wilds - returns length of string
 * @str: string to be measured
 *
 * Return: length
 */
int strlen_no_wilds(char *str)
{
	int try = 0, idx = 0;

	if (*(str + idx))
	{
		if (*str != '*')
			try++;
		idx++;

		try += strlen_no_wilds(str + idx);
	}

	return (try);
}

/**
 * iterate_wild - iterates through string located at a wildcard
 * @wildstr: string to be iterated through
 */
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 * postfix_match - checks if string matches postfix
 * @str: string to be matched
 * @postfix: fix post
 * Return: if str & postfix are identical
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}

	return (postfix);
}

/**
 * wildcmp - compare two strings, considering wildcard char
 * @s1: first string
 * @s2: second string
 *
 * Return: if string can be considered
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
