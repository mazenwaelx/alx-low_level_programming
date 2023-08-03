#include "main.h"

/**
 * wildcmp - bbe
 * @s1: ff
 * @s2: beo
 * Return: Always 0
*/

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}

if (*s2 == '\0')
{
return (0);
}
if (*s2 == '*')
{
return (wildcmp(s1, s2+1) || (*s1 != '\0' && wildcmp(s1+1, s2)));
}
if (*s1 == *s2)
{
return (wildcmp(s1+1, s2+1));
}
return (0);
}
