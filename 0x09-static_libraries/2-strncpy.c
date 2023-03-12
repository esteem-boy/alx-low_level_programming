#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strncpy - this func copy strings
 *
 * @dest: First argument of the func
 * @src: Second argument of the func
 * @n: Third argument of the func
 *
 * Return: returns 0 on successful execution
 */
char *_strncpy(char *dest, char *src, int n)
{
        int i;

        i = 0;
        while (i < n && src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }
        while (i < n)
        {
                dest[i] = '\0';
                i++;
        }
        return (dest);
}
