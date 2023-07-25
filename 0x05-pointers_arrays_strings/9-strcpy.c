#include "main.h"

/**
 * _strcpy - bbe
 * @dest: ff
 * @src: bb
 * Return: Always 0
*/

char *_strcpy(char *dest, char *src)
{
int i ,len = 0;
while (src[len] != '\0')
len++;
for (i = 0; i < len; i++)
{
dest[i] = src[i] + 1;
_putchar(dest[i]);
}
_putchar('\n')
return (0);
}
