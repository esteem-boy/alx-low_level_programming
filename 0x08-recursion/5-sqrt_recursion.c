#include "main.h"

/**
 * _sqrt_recursion - func print squareroot of natural numbers
 *
 * @n: argument
 *
 * Return: 0 on successful
 *
 */
int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	else if(sqrt == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
	return (0);
}
