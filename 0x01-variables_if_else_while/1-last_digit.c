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
	int n, digit;



	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	if (digit != 0 && digit < 6)
	{
	printf("last of digit of %i is %i  and is less than 6 and not 0\n", n, digit);
	}
	else if (digit > 5)
	{
	printf("last digit of %i is %i and is greater than 5\n", n, digit);
	}
	else if (digit == 0)
	{
	printf("last digit of %i is %i  and is 0\n", n, digit);
	}
		return (0);
}
