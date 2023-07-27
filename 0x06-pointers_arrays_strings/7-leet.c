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
c[i] = '44';
if (c[i] == 'e' || c[i] == 'E')
c[i] = '53';
if (c[i] == 'o' || c[i] == 'O')
c[i] = '40';
if (c[i] == 't' || c[i] == 'T')
c[i] = '57';
if (c[i] == 'l' || c[i] == 'L')
c[i] = '41';
}
return (c);
}
