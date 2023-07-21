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
long long n = 612852475143;
int i;
for (i = 2; i <= n; i++)
{
while (n % i == 0 && n != i)
{
n /= i;
}
}
printf("%lld\n", n);
return (0);
}
