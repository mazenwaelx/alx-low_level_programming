#include "main.h"

/**
 * _strcat - bbe
 * @dest: ff
 * @src: gg
 * Return: Always 0
*/

char *_strcat(char *dest, char *src)
{
int c = 0, c2;
while (dest[c])
{
c++;
}
for (c2 = 0; src[c2]; c2++)
{
dest[c++] = src[c2];
}
return (dest);
}
