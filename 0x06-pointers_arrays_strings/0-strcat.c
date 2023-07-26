#include "main.h"

/**
 * _strcat - bbe
 * @dest: ff
 * @src: gg
 * Return: Always 0
*/

char *_strcat(char *dest, char *src)
{
while(*dest)
{
dest++;
}
while (*src)
{
*dest++ = *src++;
}
*dest = '\0';
return dest;
}
