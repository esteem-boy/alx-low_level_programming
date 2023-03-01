#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - this func reverses the string
 *
 * @s: is the argument of the func
 *
 * Return: return nothhing
 */
void rev_string(char *s)
{
	char rev;
	int cnt;
	int i;

	rev = s[0];
	cnt = 0;

	while (s[cnt] != '\0')
	cnt++;
	for (i = 0; i < cnt; i++)
	{
		cnt--;
		rev = s[i];
		s[i] = s[cnt];
		s[cnt] = rev;
	}
}

