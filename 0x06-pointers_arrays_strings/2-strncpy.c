#include "main.h"
/**
 * _strncpy - bbe
 * @dest: ff
 * @src : gg
 * @n: gg
 * Return: Always 0
*/

char *_strncpy(char *dest, char *src, int n)
{
int c2;

for (c2 = 0; c2 < n && src[c2] != '\0'; c2++)
{
dest[c2] = src[c2];
}
while (c2 < n)
{
dest[c2] = '\0';
c2++;
}
return (dest);
}
