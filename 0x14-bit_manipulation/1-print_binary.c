#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Unsigned long int number to print in binary.
 */
void print_binary(unsigned long int n)
{
unsigned long int mask = 1;
int size = sizeof(unsigned long int) * 8;
int i;
mask <<= (size - 1);
if (n == 0)
{
_putchar('0');
return;
}
for (i = 0; i < size; i++)
{
if ((n & mask) != 0)
_putchar('1');
else
_putchar('0');
mask >>= 1;
}
}
