#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_memcpy - a func that copy the memory area address
 *
 * @dest: argument
 * @src: argument
 * @n: argument
 *
 * Return: 0
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        int i;
        int r;

        i = n;
        for (r = 0; r < i; r++)
        {
                dest[r] = src[r];
                n--;
        }
        return (dest);
}
