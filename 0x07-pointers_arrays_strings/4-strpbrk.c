#include "main.h"

/**
 * _strpbrk - bbe
 * @s: ff
 * @accept: gg
 * Return: Always 0
*/

char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
for (char *a = accept; *a; a++)
{
if (*s == *a)
{
return (s);
}
}
s++;
}
return (NULL);
}
