#include<stdio.h>
#include "main.h"
/**
 * rev_string - gg
 * @s: gg
 * Return: 0
*/

void rev_string(char *s)
{
int len = 0, len2;
while (s[len] != '\0')
len++;
for (len2 = len; len >= 0; len--)
{
_putchar(s[len]);
}
_putchar('\n');
}
