#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using if to test if pos or neg or zero using rand
 *
 * Return: 0 (Success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
	printf("%i\n is positive", n);
	}
	else if (n == 0)
	{
		printf("%i\n  is zero", n);
	}
	else
	{
		printf("%i\n is negative", n);
	}
	return (0);
}
