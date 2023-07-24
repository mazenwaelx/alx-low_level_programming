#include<stdio.h>
#include "main.h"
/**
 * _puts - gg
 * @str: gg
 * Return: 0
*/
void _puts(char *str)
{
int len;

while (*str != '\0')
{
len++;
str++;
_putchar(str[len] + 48);
}
_putchar('\n');
}
