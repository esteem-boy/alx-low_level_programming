#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strcat - this func concatinate two strings together
 *
 * @dest: 1st string argument f the func
 * @src: 2nd string argument f the func
 *
 * Return: 0 on successful
 */
char *_strcat(char *dest, char *src)
{
	char *res;

	res = strcat(dest, src);

	return (res);
}
