#include<stdio.h>
#include "main.h"
/**
 * print_rev - gg
 * @s: gg
 * Return: 0
*/

void print_rev(char *s)
{
int len, len2;
while (*s != '\0')
len++;
s++;
for (len2 = len - 1; len2 >= 0; len2--)
_putchar(s[len2]);
_putchar('\n');
}
