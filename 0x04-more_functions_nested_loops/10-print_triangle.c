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
for (row = 1; row < size; row++)
{
for (col = 1; col < size; col++)
{
if ((row + col) <= size)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
}
