#include "main.h"

/**
 * _strcpy - bbe
 * @dest: ff
 * @src: bb
 * Return: Always 0
*/

char *_strcpy(char *dest, char *src)
{
char *p = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (p);
}
