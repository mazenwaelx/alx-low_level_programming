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
char num = 'z';

while (num >= 'a')
{
	putchar(num);
	num--;
}
putchar('\n');
return (0);
}
