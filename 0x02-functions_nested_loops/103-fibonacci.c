#include "main.h"

/**
 * main - Enter point
 *
 * Description: aa
 *
 * Return: 0 (Success)
*/
int main(void)
{
int count;
unsigned long fib1 = 0, fib2 = 1, sum;
for (count = 0; count < 50; count++)
{
sum = fibl + fib2;
printf("%lu", sum);
fibl = fib2;
fib2 = sum;
if (count == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
