#include "3-calc.h"

#define EXIT_CODE 100

/**
 * op_add - Calculate the sum of @a and @b.
 *
 * @a: The first number
 * @b: The second number
 *
 * Return: The sum of the given numbers
 *
 **/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calculate the difference of @a and @b.
 *
 * @a: The first number
 * @b: The second number
 *
 * Return: The difference of the given numbers
 *
 **/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Calculate the product of @a and @b.
 *
 * @a: The first number
 * @b: The second number
 *
 * Return: The product of the given numbers
 *
 **/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Calculate the quotient @a by @b.
 *
 * @a: The first number
 * @b: The second number
 *
 * Return: The quotient after dividing @a by @b
 *
 **/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(EXIT_CODE);
	}
	return (a / b);
}

/**
 * op_mod - Calculate the remainder after dividing
 * @a by @b.
 *
 * @a: The first number
 * @b: The second number
 *
 * Return: The remainder after dividing @a by @b
 *
 **/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(EXIT_CODE);
	}
	return (a % b);
}
