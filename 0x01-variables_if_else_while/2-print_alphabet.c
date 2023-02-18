#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i;
	int j;

	i = 'a';
	j = 'A';
	for (; i <= 'z' ;)
	{
		putchar(i);
		i++;
	}
	for (; j <= 'Z'; )
	{
		putchar(j);
		j++;
	}
	{
	'\n';
	return (0);
	}
}
