#include "main.h"

/**
 * print_diagsums - bbe
 * @a: ff
 * @size: bol
 * Return: Always 0
*/

void print_diagsums(int *a, int size)
{
int i, sum = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum += a[i * size + i];
}
for (i = 0; i < size; i++)
{
sum2 += a[i * size + (size - 1 - i)];
}
printf("%d", sum);
printf("%d", sum2);
}
