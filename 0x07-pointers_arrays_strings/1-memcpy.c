#include "main.h"

/**
 * _memcpy - bbe
 * @dest: ff
 * @src: gg
 * @n: gg
 * Return: Always 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(src + i) = *dest;
}
return (dest);
}
