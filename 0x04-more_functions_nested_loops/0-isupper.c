#include "main.h"

/**
 * _isupper - Function checks for uppercase English letters
 *
 * @c: parameter of the function
 *
 * Return: (1) when positive and (0) if otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
