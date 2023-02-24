#include "main.h"

/**
* _isdigit - this func checks of uppercases of character
*
* @c: is argument of the func
*
* Return: this returns 1 if is the char checked is true and 0 if otherwise
*
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
