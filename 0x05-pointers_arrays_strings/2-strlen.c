#include "main.h"

/**
 * _strlen - Function returns the length of string
 *
 * @s: pointer to a string
 *
 * Return: Legnth of a string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
