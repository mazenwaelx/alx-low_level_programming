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
int digit1 = 0, digit2;
while (digit1 <= 9)
{
digit2 = 0;
while (digit2 <= 9)
{
putchar(digit1 + '0');
putchar(digit2 + '0');
if (digit1 + digit2 != 18)
{
putchar(',');
putchar(' ');
}
digit2++;
}
digit1++;
}
putchar('\n');












return (0);
}
