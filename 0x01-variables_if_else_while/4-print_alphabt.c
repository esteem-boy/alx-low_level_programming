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

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
		{
			continue;
		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
