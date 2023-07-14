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
int i;
for (i = 0; i < 16; i++)
{
	if (i < 10)
	{
		putchar(i);
	}
	else
	{
		putchar(i - 10 + 'a');
	}
}
putchar('\n');
return (0);
}
