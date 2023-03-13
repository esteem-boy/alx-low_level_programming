#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - func prints prime numners
 *
 * @n: argument
 *
 * Return: (0) on successful
 *
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - func returns prime numbers
 *
 * @n: argument
 * @i: argument
 *
 * Return: formatted prime numbers
 *
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}
	else
	{
		return (check_prime(n, i + 1));
	}
	return (0);
}
