#include "main.h"

/**
 * rot13 - bbe
 * @str: ff
 * Return: Always 0
*/
char *rot13(char *str)
{
char *p = str;
while (*p)
{
int offset = ((*p >= 'a') && (*p <= 'z')) ? 'a' : 'A';
if ((*p >= 'a' && *p <= 'm') || (*p >= 'A' && *p <= 'M') ||
(*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'Z'))
{
*p = (*p - offset + 13) % 26 + offset;
}
p++;
}
return (str);
}
