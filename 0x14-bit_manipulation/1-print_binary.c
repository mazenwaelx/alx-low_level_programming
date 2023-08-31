#include "main.h"

/**
 * print_binary - bbe
 * @n: ff
 * Return: Always 0
*/

void print_binary(unsigned long int n)
{
unsigned long int num = 1;
int size = sizeof(unsigned long int) * 8;
int i;
num <<= (size - 1);
if (n == 0)
{
_putchar('0');
return;
}
for (i = 0; i < size; i++)
{
if ((n & num) != 0)
_putchar('1');
else
_putchar('0');
num >>= 1;
}
}
