#include "main.h"
/**
 * reverse_array - bbe
 * @a: ff
 * @n : gg
 * Return: Always 0
*/

void reverse_array(int *a, int n)
{
int i, j;
for (i = 0, j = n - 1; i < j; i++, j--)
{
int temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
