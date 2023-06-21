#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds integers
 * @a: first int
 * @b: second int
 *
 * Return: added value
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts integers
 * @a: first int
 * @b: second int
 *
 * Return: subtracted value
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies integers
 * @a: first int
 * @b: second int
 *
 * Return: multiplied values
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides integers
 * @a: first int
 * @b: second int
 *
 * Return: divided value
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns remainder of int
 * @a: first int
 * @b: second int
 *
 * Return: remainder of int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
