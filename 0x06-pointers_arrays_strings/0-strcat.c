#include "main.h"

/**
 * _strcat - bbe
 * @dest: ff
 * @src: gg
 * Return: Always 0
*/

char *_strcat(char *dest, char *src)
{
int len, len2, len3;
while (*dest != '\0')
{
len++;
}
while (*src != '\0')
{
len2++;
}
for(len3 = 0; len3 < (len + len2); len3++)
{
dest[len3] = src[len3] + dest[len3];
}
return (dest);
}
