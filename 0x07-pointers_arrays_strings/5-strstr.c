#include "main.h"

/**
 * _strstr - bbe
 * @haystack: ff
 * @needle: gg
 * Return: Always 0
*/

char *_strstr(char *haystack, char *needle)
{
if (!*needle)
{
return (haystack);
}
while (*haystack)
{
char *h = haystack;
char *n = needle;

while (*h && *n && (*h == *n))
{
++h;
++n;
}
if (!*n)
{
return (haystack);
}
++haystack;
}
return (NULL);
}
