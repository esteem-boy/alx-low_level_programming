#include "main.h"

/**
 * _isalpha - Function checks for English alphabets
 *
 * @c: parameter of the function 
 *
 * Return: (1) if positive and (0) if otherwise
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 97 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
