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
_putchar(str[len]);
len++;
str++;
}
_putchar('\n');
}
