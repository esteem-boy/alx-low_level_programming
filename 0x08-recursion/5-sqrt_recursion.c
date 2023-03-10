#include "main.h"

/**
 * _sqrt_recursion - func print squareroot of natural numbers
 * _sqrt - Calculate sqaure root of all natural numbers
 *
 * @n: argument
 * @i: argument
 *
 * Return: 0 on successful
 *
 */
int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - thic func calc the root of all natural numbers)
 * @n: argument
 * @i: argument
 *
 * Return: root of natural numbers
 *
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
	return (0);
}
