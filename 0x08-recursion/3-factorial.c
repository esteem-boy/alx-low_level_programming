#include "main.h"

/**
 * factorial - returns factorial of a number
 *
 * @n: argument of the func
 *
 * Return: 0 on successful
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
