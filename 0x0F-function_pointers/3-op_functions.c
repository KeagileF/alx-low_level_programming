#include "3-calc.h"

int op_add(int x, int y);
int op_sub(int x, int y);
int op_mul(int x, int y);
int op_div(int x, int y);
int op_mod(int x, int y);

/**
 * op_add - Returns sum of two numbers.
 * @x: First number.
 * @y: Second number.
 *
 * Return: The sum of x and y.
 */
int op_add(int x, int y)
{
	return (x + y);
}
/**
 * op_sub - Returns difference of two numbers.
 * @x: First number.
 * @y: Second number.
 *
 * Return: The difference of x and y.
 */
int op_sub(int x, int y)
{
	return (x - y);
}
/**
 * op_mul - Returns the product of two numbers.
 * @x: First number.
 * @y: Second number.
 *
 * Return: The product of x and y.
 */
int op_mul(int x, int y)
{
	return (x * y);
}
/**
 * op_div - Returns the division of two numbers.
 * @x: The first number.
 * @y: The second number.
 *
 * Return: The quotient of x and y.
 */
int op_div(int x, int y)
{
	return (x / y);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @x: First number.
 * @y: Second number.
 *
 * Return: The remainder of the division of x by y.
 */
int op_mod(int x, int y)
{
	return (x % y);
}
