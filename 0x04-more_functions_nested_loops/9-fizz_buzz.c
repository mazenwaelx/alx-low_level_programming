i#include "main.h"
#include <stdio.h>
/**
 * main - Enter point
 *
 * Description: aa
 *
 * Return: 0 (Success)
*/

int main(void)
{
int num;

for (num = 1; num <= 100; num++)
{
if (num % 3 == 0 && !(num % 5 == 0))
printf("Fizz");
else if (num & 5 == 0 && !(num % 3 == 0))
printf("Buzz");
else if (num % 3 == 0 && num % 5 == 0)
printf("FizzBuzz");
else
putchar(num + 48);
if (num != 100)
putchar(' ');
else
putchar('\n');
}
return (0);
}
