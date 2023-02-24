#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
* main - this func forms the bearybones of every C program
*
* Return: should return the value 0
*
*/
int main(void)
{
	long int num;
	long int max;
	long int x;

	num = 612852475143;
	max = -1;

	while (num % 2 == 0)
	{
		max = 2;
		num /= 2;
	}

	for (x = 3; x <= sqrt(num); x = x + 2)
	{
		while (num % x == 0)
		{
			max = x;
			num = num / 2;
		}
	}
	if (num > 2)
	{
		max = num;
	}
	printf("%ld\n", max);
	return (0);
}
