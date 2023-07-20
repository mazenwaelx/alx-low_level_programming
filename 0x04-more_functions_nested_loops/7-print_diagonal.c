#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - bbe
 *@n: ff
*/

void print_diagonal(int n)
{
int num, space;

if (n <= 0)
_putchar('\n');
else
{
for (num = 1; num <= n; num++)
{
for (space = 1; space <= num; space++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}

}
}
