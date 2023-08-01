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
char *a;
while (*haystack != '\0')
{
for (a = needle; *a != '\0'; a++)
{
if (*haystack == *needle)
return (haystack);
}
haystack++;
}
return (NULL);
}
