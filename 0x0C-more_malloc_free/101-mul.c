#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _print - moves string one place to left and prints string
 * @str: string to move
 * @l: size of string
 *
 * Return: void
 */
void _print(char *str, int l)
{
	int a, c;

	a = c = 0;
	while (a < l)
	{
		if (str[a] != '0')
			c = 1;
		if (c || a == l - 1)
			_putchar(str[a]);
		a++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string
 * and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 *
 * Return: pointer to dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int q, r, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (q = num_index, r = dest_index; q >= 0; q--, r--)
	{
		mul = (n - '0') * (num[q] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[r] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[r] = add % 10 + '0';
	}
	for (addrem += mulrem; r >= 0 && addrem; r--)
	{
		add = (dest[r] - '0') + addrem;
		addrem = add / 10;
		dest[r] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_for_digits - checks argument to ensure they are digits
 * @av: pointer to arguments
 *
 * Return: 0 if digits, 1 if not
 */
int check_for_digits(char **av)
{
	int g, d;

	for (g = 1; g < 3; g++)
	{
		for (d = 0; av[g][d]; d++)
		{
			if (av[g][d] < '0' || av[g][d] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - initializes a string
 * @str: string to initialize
 * @l: length of string
 *
 * Return: void
 */
void init(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
		str[i] = '0';
	str[i] = '\0';
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0, or exit status 98 if failed
 */
int main(int argc, char *argv[])
{
	int c1, c2, cn, ti, d;
	char *f;
	char *k;
	char w[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ti = 0; w[ti]; ti++)
			_putchar(w[ti]);
		exit(98);
	}
	for (c1 = 0; argv[1][c1]; c1++)
		;
	for (c2 = 0; argv[2][c2]; c2++)
		;
	cn = c1 + c2 + 1;
	f = malloc(cn * sizeof(char));
	if (f == NULL)
	{
		for (ti = 0; w[ti]; ti++)
			_putchar(w[ti]);
		exit(98);
	}
	init(f, cn - 1);
	for (ti = c2 - 1, d = 0; ti >= 0; ti--, d++)
	{
		k = mul(argv[2][ti], argv[1], c1 - 1, f, (cn - 2) - d);
		if (k == NULL)
		{
			for (ti = 0; w[ti]; ti++)
				_putchar(w[ti]);
			free(f);
			exit(98);
		}
	}
	_print(f, cn - 1);
	return (0);
}
