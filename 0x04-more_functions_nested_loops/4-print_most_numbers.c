#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - bbe
 *
*/

void print_most_numbers(void)
{
int ch = 48;
while (ch <= 57)
{
if (ch == 50 || ch == 52)
continue;
_putchar(ch);
}
_putchar('\n');
}
