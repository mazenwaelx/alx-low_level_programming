#include "main.h"

/**
 * _strcpy - bbe
 * @dest: ff
 * @src: bb
 * Return: Always 0
*/

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
_putchar(dest[i]);
}
_putchar('\n');
}
