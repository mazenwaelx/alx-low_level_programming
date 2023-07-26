#include "main.h"
/**
 * isLower - bbe
 * @c: ff
 * Return: Always 0
*/
int isLower(char c)
{
return (c >= 97 && c <= 122);
}
/**
 * delimiter - bbe
 * @c: ff
 * Return: Always 0
*/
int delimiter(char c)
{
int i;
char delimiter[] = " \t\n,.!?\"(){}";
for (i = 0; i < 12; i++)
{
if (c == delimiter[i])
return (1);
}
return (0);
}
/**
 * cap_string - bbe
 * @s: ff
 * Return: Always 0
*/
char *cap_string(char *s)
{
char *ptr = s;
int founddelimit = 1;
while (*s)
{
if (delimiter(*s))
founddelimit = 1;
else if (isLower(*s) && founddelimit)
{
*s -= 32;
founddelimit = 0;
}
else
founddelimit = 0;
s++;
}
return (ptr);
}
