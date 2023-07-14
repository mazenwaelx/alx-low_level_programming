#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Enter point
 *
 * Description: aa
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = 0;
while (digit < 10)
{
	putchar(digit + '0');
	digit++;
}
putchar('\n');
return (0);
}
