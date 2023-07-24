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
printf("%d", a[len]);
if (len != (n - 1))
printf(", ");
}
printf("\n");
}
