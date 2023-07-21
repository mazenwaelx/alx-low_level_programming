#include <stdio.h>
#include "main.h"

/**
 * print_triangle - bbe
 *@size: ff
*/

void print_triangle(int size)
{
int row, col, space;

if (size <= 0)
_putchar('\n');
else
{
for (space = size; space >= 1; space--)
_putchar(' ');
for (row = 1; row < size; row++)
{
for (col = 1; col < size; col++)
_putchar(35);
_putchar('\n');
}
}
}
