#include "main.h"

/**
 * _isdigit - Function checks for digit ranging from 0 to 9
 *
 * @c: Parameter of the function
 *
 * Return: (1) if positive and (0) if otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
