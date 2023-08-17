#include "variadic_functions.h"
/**
 * print_strings - bbe
 * @separator: ff
 * @n: gg
 * @...: gg
 * Return: Always 0
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
va_start(args, n);
unsigned int i;
const char *str;
for (i = 0; i < n; ++i)
{
str = va_arg(args, const char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(args);
}
