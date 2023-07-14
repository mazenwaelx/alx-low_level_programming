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
int num = 0;

while (num <= 9)
{
putchar(num + '0');

if (num != 9)
{
	putchar(',');
	putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
