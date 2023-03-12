#include "main.h"

/**
 * _isalpha - the checks for alphabets
 *
 * @c: parametr of the func
 *
 * Return: On successful it returns 1 and returns 0 otherwise
 *
 */

int _isalpha(int c)
{
        if ((c > 96 && c < 123) || (c > 64 && c < 91))
        {
                return (1);
        }
        else
        {
                return (0);
        }
        return (0);
}
