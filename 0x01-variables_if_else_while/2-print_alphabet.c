#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - This is the main function of the C code
 *
 */
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
	putchar('\n');
	return (0);
	}
}
