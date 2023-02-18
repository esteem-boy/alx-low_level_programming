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

	i = 'a';
	for (; i <= 'z' ;)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
