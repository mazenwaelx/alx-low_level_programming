#include "main.h"

/**
 * leet - bbe
 * @c: ff
 * Return: Always 0
*/
char *leet(char *c)
{
int i;
for (i = 0; c[i] != '\0'; i++)
{
if (c[i] == 'a' || c[i] == 'A')
c[i] = '52';
if (c[i] == 'e' || c[i] == 'E')
c[i] = '51';
if (c[i] == 'o' || c[i] == 'O')
c[i] = '48';
if (c[i] == 't' || c[i] == 'T')
c[i] = '55';
if (c[i] == 'l' || c[i] == 'L')
c[i] = '49';
}
return (c);
}
