#include "main.h"

/**
 * _isupper - this func checks of uppercases of character
 *
 * @c: is argument of the func
 *
 * Return: this returns 1 if is the char checked is true and 0 if otherwise
 *
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
