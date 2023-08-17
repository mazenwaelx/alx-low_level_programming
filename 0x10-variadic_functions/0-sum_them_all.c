#include "variadic_functions.h"
/**
 * sum_them_all - bbe
 * @n: ff
 * @...: int
 * Return: Always 0
*/
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
return (0);
va_list args;
int i, sum, value;
va_start(args, n);
sum = 0;
for (i = 0; i < n; i++)
{
value = va_arg(args, int);
sum += value;
}
va_end(args);
return (sum);

