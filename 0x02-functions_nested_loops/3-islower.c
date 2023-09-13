#include "main.h"

/**
 * _islower - Function checks for lower case letters
 *
 * @c: Parameter of the function
 *
 * Return: (1) if positive and (0) if otherwisw
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
