#include "main.h"

/**
 * is_prime_number - Checks whether the given number
 *  is prime or not.
 *
 * @n: The given number
 *
 * Return: 1 when @n is prime otherwise 0
 *
 **/
int is_prime_number(int n)
{
	return (prime_check(n, 2));
}

/**
 * prime_check - Scan natural numbers begining 2
 * to determine whether the given number @n is prime.
 *
 * @n: The given number
 * @i: A natural number
 *
 * Return: The number 1 when @n is prime otherwise
 * 0
 *
 **/
int prime_check(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if ((n % i == 0 && i < n) || (n < 2))
	{
		return (0);
	}
	return (prime_check(n, i + 1));
}
