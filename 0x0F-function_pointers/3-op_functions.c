#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of 2 numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns difference of 2 numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul -  multiplies of 2 numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides 2 numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: division of 2 numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns remainder of division of 2 numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: remainder of division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
