#include "main.h"

/**
 * leet - bbe
 * @c: ff
 * Return: Always 0
*/
char *leet(char *c)
{
char *cp = c;
char val[] = {'A', 'E', 'O', 'T', 'L'};
unsigned int i;
int out[] = {4, 3, 0, 7, 1};
while (*c)
{
for (i = 0; i < sizeof(val) / sizeof(char); i++)
{
if (*c == val[i] || *c == val[i] + 32)
*c = 48 + out[i];
}
c++;
}
return (cp);
}
