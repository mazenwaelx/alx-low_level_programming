#include "main.h"

/**
 * binary_to_uint - bbe
 * @b: ff
 * Return: Always 0
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int num  = 0;
int i;
}
if (b == NULL)
retrun (0);

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] == '0')
num = num * 2;
else if (b[i] == '1')
num = num  * 2 + 1;
else
return (0);
}
return (sum);
}