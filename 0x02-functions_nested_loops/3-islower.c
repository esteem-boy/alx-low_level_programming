#include <ctype.h>
#include "main.h"

/**
 * _islower - check the code.
 *
 * @c: is the parameter of th function _islower
 *
 * Return: should be 1 for a lowercae character and 0 if is not.
 */
int _islower(int c) /* int c: is the argument of the function */
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
