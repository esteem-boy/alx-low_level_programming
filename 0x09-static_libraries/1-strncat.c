#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strncat - this function concatenates two strings together
 *
 * @dest: 1st argument of the func
 * @src: 2nd argument of the func
 * @n: 3rd argument of the func
 *
 * Return: 0 Always
 */
char *_strncat(char *dest, char *src, int n)
{
        int i;
        int destlen;

        i = 0;
        destlen = strlen(dest);
        while (i < n && src[i] != '\0')
        {
                dest[destlen + i] = src[i];
                i++;
        }
        dest[destlen + i] = '\0';

        return (dest);
}
