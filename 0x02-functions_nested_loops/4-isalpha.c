#include "main.h"

/**
 * _isalpha - the checks for alphabets
 *
 *int c: argument of the func
 *
 * Return: On successful it returns 1 and returns 0 otherwise
 *
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 95 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
