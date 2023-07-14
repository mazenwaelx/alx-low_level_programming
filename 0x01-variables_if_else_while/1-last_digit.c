#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using if to check for the cond
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n != 0 && n < 6)
	{
	printf("is %i and is less than 6 and not 0\n", n);
	}
	else if (n > 5)
	{
	printf("is %i and is greater than 5\n", n);
	}
	else if (n == 0)
	{
	printf("is %i and is 0\n", n);
	}
		return (0);
}
