#include "main.h"
/**
 * _strspn - bbe
 * @s: ff
 * @accept: gg
 * Return: Always 0
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int is_accept;

while (*s != '\0')
{
is_accept = 0;
for (char *a = accept; *a != '\0'; a++)
{
if (*s == *a)
{
is_accept = 1;
break;
}
}
if (is_accept == 0)
return (count);
count++;
s++;
}
return (count);
}
