#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is the main function of the C code
 *
 * Return: 0 Successful
 *
 */
int main(void) /* main - Another main desription */
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
	putchar('\n');
	return (0);
}
