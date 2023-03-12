#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - this func compares between two string
 *
 * @s1: First argument of the func
 * @s2: Second argument of the func
 *
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
        int res;

        res = strcmp(s1, s2);

        return (res);
}
