#include "main.h"

/**
 * _sqrt_recursion - Returns the square root
 * for the given number.
 *
 * @n: The given number
 *
 * Return: The quare root for the given number
 *
 **/
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - Find the square for the given number
 * beginning at the natural number @i.
 *
 * @n: The given number
 * @i: A natural number creeping from 1 until
 * the square root is found
 *
 * Return: The square root for the number. Or a
 * negative value if @n has no square root
 *
 **/
int find_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (find_sqrt(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
