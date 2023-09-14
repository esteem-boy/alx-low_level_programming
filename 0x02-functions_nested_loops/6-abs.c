#include "main.h"

/**
 * _abs - Function returns the absolute value of a number
 *
 * @j: parameter of the function
 *
 * Return: (0) On success
 */
int _abs(int j)
{
	int n = -1;

	if (j > 0)
	{
		return (j);
	}
	else if (j < 0)
	{
		j *= n;
		return (j);
	}
	else
	{
		return (0);
	}

	return (0);
}
