#include "main.h"

/**
 * puts_array - bbe
 * @a: ff
 * @n: bb
 * Return: Always 0
*/

void print_array(int *a, int n)
{
int len;
for (len = 0; len < n; len++)
{
_putchar(a[len]);
_putchar(',');
_putchar(' ');
}
}
