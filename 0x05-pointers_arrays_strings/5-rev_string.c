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
len--;
_putchar('\n');
for (len2 = len - 1; len2 >= 0; len2--)
{
_putchar(s[len2]);
}
_putchar('\n');
}
