#include <stdio.h>
#include "main.h"

/**
 * print_line - bbe
 *@n: bb
*/

void print_line(int n)
{
int num;
for (num = 0; num <= n; num++)
{
if (n < 0)
_putchar('\n');
_putchar('_');
}
_putchar('\n');
}
