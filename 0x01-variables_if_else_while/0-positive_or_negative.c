#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*
 * main - A C programe must begin and end with a main, this is because
 * the execution of the code start from here.
 *
 * Return: 0 Successful
 */
int main(void) /* main - this is the backbone of the C code */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("is postive %d\n", n);
	}
	else if (n == 0)
	{
		printf("is zero %d\n", n);
	}
	else
		printf("is negative %d\n", n);

	return (0);
}
