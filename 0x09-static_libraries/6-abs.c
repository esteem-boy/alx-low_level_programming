#include "main.h"
#include <math.h>

/**
 * _abs - this func returns an absolute number
 *
 * @abs: is the param of the func
 *
 * Return: returns whatever the value of abs is
 *
 */
int _abs(int abs)
{
        if (abs < 0)
        {
                abs = -(abs);
        }
        else if (abs >= 0)
        {
                abs = abs;
        }
        return (abs);
}
