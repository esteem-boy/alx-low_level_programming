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

	i = 0;
	for ( ; i <= 9;)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');
	return (0);
}
