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
	printf(n, "%i\n is positive");
	}
	else if (n == 0)
	{
		printf(n, "%i\n  is zero");
	}
	else
	{
		printf(n, "%i\n is negative");
	}
	return (0);
}
