#include<stdio.h>
#include "main.h"
/**
 * rev_string - gg
 * @s: gg
 * Return: 0
*/

#include "main.h"

void rev_string(char *s)
{
char *start = s;
char *end = s;
char tmp;
if (s)
{
while (*end)
{
end++;
}
end--;
while (start < end)
{
tmp = *start;
*start++ = *end;
*end-- = tmp;
}
}
}

