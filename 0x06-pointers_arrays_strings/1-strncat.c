#include "main.h"
/**
 * _strncat - bbe
 * @dest: ff
 * @src : gg
 * @n: gg
 * Return: Always 0
*/

char *_strncat(char *dest, char *src, int n)
{    
int c = 0, c2;
while (dest[c])
{
c++;
}
for (c2 = 0; c2 < n && src[c2] != '\0'; c2++)
{
dest[c + c2] = src[c2];
}
return (dest); 
}
