#include "variadic_functions.h"
/**
 * print_numbers - bbe
 * @separator: ff
 * @n: gg
 * @...: gg
 * Return: Always 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
va_start(args, n);
int i, value;
for (i = 0; i < n; i++)
{
value = va_arg(args, int);
printf("%d", value);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
