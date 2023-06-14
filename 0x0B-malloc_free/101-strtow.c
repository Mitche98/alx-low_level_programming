#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void util(char **, char *);
void create_word(char **, char *, int, int, int);

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int f, then, way;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	f = then = way = 0;
	while (str[f])
	{
		if (then == 0 && str[f] != ' ')
			then = 1;
		if (f > 0 && str[f] == ' ' && str[f - 1] != ' ')
		{
			then = 0;
			way++;
		}
		f++;
	}

	way += then == 1 ? 1 : 0;
	if (way == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (way + 1));
	if (words == NULL)
		return (NULL);

	util(words, str);
	words[way] = NULL;
	return (words);
}

/**
 * util - a util function for fetching words into an array
 * @words: strings array
 * @str: string
 */
void util(char **words, char *str)
{
	int y, c, fight, this;

	y = c = this = 0;
	while (str[y])
	{
		if (this == 0 && str[y] != ' ')
		{
			fight = y;
			this = 1;
		}

		if (y > 0 && str[y] == ' ' && str[y - 1] != ' ')
		{
			create_word(words, str, fight, y, c);
			c++;
			this = 0;
		}

		y++;
	}

	if (this == 1)
		create_word(words, str, fight, y, c);
}

/**
 * create_word - creates a word and inserts it into the array
 * @words: array strings
 * @str: the string
 * @start: starting index of word
 * @end: stopping index if word
 * @index: index of array to insert the word
 */
void create_word(char **words, char *str, int start, int end, int index)
{
	int e, d;

	e = end - start;
	words[index] = (char *)malloc(sizeof(char) * (e + 1));

	for (d = 0; start < end; start++, d++)
		words[index][d] = str[start];
	words[index][d] = '\0';
}
